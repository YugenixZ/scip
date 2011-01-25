#!/usr/bin/env bash
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#*                                                                           *
#*                  This file is part of the program and library             *
#*         SCIP --- Solving Constraint Integer Programs                      *
#*                                                                           *
#*    Copyright (C) 2002-2011 Konrad-Zuse-Zentrum                            *
#*                            fuer Informationstechnik Berlin                *
#*                                                                           *
#*  SCIP is distributed under the terms of the ZIB Academic License.         *
#*                                                                           *
#*  You should have received a copy of the ZIB Academic License              *
#*  along with SCIP; see the file COPYING. If not email to scip@zib.de.      *
#*                                                                           *
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
# $Id: check_gams.sh,v 1.2 2011/01/25 19:31:48 bzfviger Exp $
TSTNAME=$1
GAMSBIN=$2
SOLVER=${3^^}
SETNAME=$4
BINNAME=gams.$5
TIMELIMIT=$6
NODELIMIT=$7
GAPLIMIT=${8:-0}
THREADS=$9
CONTINUE=${10}
SCRDIR=${11}
CONVERTSCIP=${12}

#TODOs:
# - optionally keep solutions via gdx=... option
# - enforce hard timelimit (see schulz.gms from ptools)
# - enable solvelink=5

if test -z "$SOLVER"
then
  echo "GAMSSOLVER not specified. Abort."
  exit 1
fi

SETDIR=../settings

if test ! -e results
then
    mkdir results
fi
if test ! -e locks
then
    mkdir locks
fi

OUTFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.out
ERRFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.err
LSTFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.lst
TRCFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.trc
RESFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.res
TEXFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.tex
SETFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.set
PAVFILE=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.pav
GMSDIR=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.gms
OPTDIR=results/check.$TSTNAME.$BINNAME.$SOLVER.$SETNAME.opt

if test ! -e $OUTFILE
then
    CONTINUE=false
fi

if test "$CONTINUE" = "true"
then
    MVORCP=cp
else
    MVORCP=mv
fi

DATEINT=`date +"%s"`
if test -e $OUTFILE
then
    $MVORCP $OUTFILE $OUTFILE.old-$DATEINT
fi
if test -e $ERRFILE
then
    $MVORCP $ERRFILE $ERRFILE.old-$DATEINT
fi
if test -e $LSTFILE
then
    $MVORCP $LSTFILE $LSTFILE.old-$DATEINT
fi
if test -e $TRCFILE
then
    $MVORCP $TRCFILE $TRCFILE.old-$DATEINT
fi

if test "$CONTINUE" = "true"
then
    LASTPROB=`./getlastprob.awk $OUTFILE`
    echo Continuing benchmark. Last solved instance: $LASTPROB
    echo "" >> $OUTFILE
    echo "----- Continuing from here. Last solved: $LASTPROB -----" >> $OUTFILE
    echo "" >> $OUTFILE
else
    LASTPROB=""
fi

uname -a >>$OUTFILE
uname -a >>$ERRFILE
date >>$OUTFILE
date >>$ERRFILE

# we add 10% to the hard time limit and additional 10 seconds in case of small time limits
HARDTIMELIMIT=`expr \`expr $TIMELIMIT + 10\` + \`expr $TIMELIMIT / 10\``

echo "hard time limit: $HARDTIMELIMIT s" >>$OUTFILE

# set pf4=0 to get no default upper bounds on integer variables
# set domlim to infinity to not stop on function evaluation errors
# set workfactor to it's maximum for BARON
# #do not use scratch files (solvelink=5) if possible, GAMS resets to solvelink=2 if not supported by solver  
# set logoption=3 to get default output to stdout
# listing file: append mode, print step summary, disable solution printing, disable rows and columns output, disable page control
GAMSOPTS="pf4=0 domlim=9999999 workfactor=1500"  #solvelink=5
GAMSOPTS="$GAMSOPTS logoption=3 output=$LSTFILE appendout=1 stepsum=1 solprint=0 limcol=0 limrow=0 pc=2 pw=255"
GAMSOPTS="$GAMSOPTS reslim=$TIMELIMIT"
GAMSOPTS="$GAMSOPTS nodlim=$NODELIMIT"
GAMSOPTS="$GAMSOPTS optcr=$GAPLIMIT"
GAMSOPTS="$GAMSOPTS threads=$THREADS"

# use scratch directory for GAMS scratch file if given and existing
if test -n "$SCRDIR"
then
  if test -d "$SCRDIR"
  then
    GAMSOPTS="$GAMSOPTS SCRDIR=$SCRDIR"
  else
    echo "Scratch directory $SCRDIR does not exists. Abort."
    exit 1
  fi
fi

# setup option file
# create directory $OPTDIR and put optionfile <solvername>.opt there
if test "$SETNAME" != "default"
then
  if test -f "$SETDIR/$SETNAME.gamsset"
  then
    if test -d $OPTDIR
    then
      rm -f $OPTDIR/*
    else
      mkdir -p $OPTDIR
    fi
    cp "$SETDIR/$SETNAME.gamsset" $OPTDIR/${SOLVER,,}.opt
    GAMSOPTS="$GAMSOPTS optdir=$OPTDIR optfile=1"
  else
    echo "${m} settings file $SETDIR/${SETNAME}.gamsset not found"
    exit 1
  fi
fi

#initialize gams trace file, also add information on solver and limits for eval script
echo "* Trace Record Definition" > $TRCFILE
echo "* GamsSolve" >> $TRCFILE
echo "* InputFileName,ModelType,SolverName,OptionFile,Direction,NumberOfEquations,NumberOfVariables,NumberOfDiscreteVariables,NumberOfNonZeros,NumberOfNonlinearNonZeros," >> $TRCFILE
echo "* ModelStatus,SolverStatus,ObjectiveValue,ObjectiveValueEstimate,SolverTime,ETSolver,NumberOfIterations,NumberOfNodes" >> $TRCFILE
echo "*" >> $TRCFILE
echo "* SOLVER,$SOLVER" >> $TRCFILE
echo "* TIMELIMIT,$TIMELIMIT" >> $TRCFILE
echo "* NODELIMIT,$NODELIMIT" >> $TRCFILE
echo "* GAPLIMIT,$GAPLIMIT" >> $TRCFILE
echo "* SETTINGS,$SETNAME" >> $TRCFILE

GAMSOPTS="$GAMSOPTS traceopt=3 trace=$TRCFILE"

# save gams command line options in $SETFILE
echo "$GAMSOPTS" > $SETFILE

# check for SCIP for converting test instances into GAMS files
# set CONVERTSCIP to empty if no SCIP found or feature is disabled
if test -z "$CONVERTSCIP"
then
  if test -x ../bin/scip
  then
    CONVERTSCIP=../bin/scip
  else
    CONVERTSCIP=
  fi
elif test "$CONVERTSCIP" = no
then
  CONVERTSCIP=
else
  if test ! -x $CONVERTSCIP
  then
    echo "$CONVERTSCIP for converting into gams format is not an executable file. Abort."
    exit 1
  fi
fi

for i in `cat $TSTNAME.test`
do
    if test "$LASTPROB" = ""
    then
        LASTPROB=""
        if test -f $i
        then
            echo @01 $i ===========
            echo @01 $i ===========                >> $ERRFILE
            echo -----------------------------
            date
            date >>$ERRFILE
            
            gmsfile=`basename $i`
            inputdir=`dirname $i`
            case $gmsfile in
              *.gms )
                ;;
              *.gms.gz | *.gms.z )
                echo "Temporarily decompressing $i."
                gmsfile=${gmsfile/%.gz/}
                gmsfile=${gmsfile/%.z/}
                inputdir=$GMSDIR
                mkdir -p $inputdir
                gunzip -c $i > $inputdir/$gmsfile
                ;;
              *.gms.bz2 )
                echo "Temporarily decompressing $i."
                gmsfile=${gmsfile/.bz2/}
                inputdir=$GMSDIR
                mkdir -p $inputdir
                bunzip2 -c $i > $inputdir/$gmsfile
                ;;
              * )
                if test -n "$CONVERTSCIP"
                then
                  echo "Attempt converting $i to GAMS format using $CONVERTSCIP."
                  inputdir=$GMSDIR
                  mkdir -p $inputdir
                  # construct gams file name as basename of model, compressor extensions stripped, everything starting at last '.' removed, and .gms appened
                  gmsfile="`echo $gmsfile | sed -e 's/\.bz2$//' -e 's/\.gz$//' -e 's/\.z$//' -e 's/\.[^.]\{1,\}$//'`.gms"
                  $CONVERTSCIP -s "" -c "set reading gmsreader freeints TRUE r $i w genprob $inputdir/$gmsfile q" 2>>$ERRFILE
                else
                  echo "Warning: Instance may not be in GAMS format, but conversion is disabled. Expect trouble!" | tee -a $ERRFILE
                fi
                ;;
            esac
            
            # get modeltype of instance and convert into capitals
            modtype=`grep -i '^[^*]' $inputdir/$gmsfile | tr '[a-z]' '[A-Z]' | sed -n -e '/SOLVE.* USING/s/\(.* USING [ %]*\)\([^ %]*\)\(.*\)/\2/p'`
            echo "Modeltype: ${modtype:-UNKNOWN!}"
            
            if test -z "$modtype"
            then
              echo "Could not recognize model type. Skip instance."  | tee -a $ERRFILE
              date
              date >>$ERRFILE
              echo -----------------------------
              echo
              echo =ready=
              continue
            fi
            
            echo -----------------------------
            date +"@03 %s"
            
            # run GAMS and check return code
            $GAMSBIN $gmsfile $GAMSOPTS inputdir=$inputdir $modtype=$SOLVER 2>>$ERRFILE
            gamsrc=$?
            if test $gamsrc != 0
            then
              echo "GAMS returned with error code $gamsrc. There was some problem." >>$ERRFILE
              #TODO write 13/13 into trace file
            fi
            
            date +"@04 %s"
            echo -----------------------------
            date
            date >>$ERRFILE
            echo -----------------------------
            echo
            echo =ready=
        else
            echo @02 FILE NOT FOUND: $i ===========
            echo @02 FILE NOT FOUND: $i =========== >>$ERRFILE
        fi
    else
        echo skipping $i
        if test "$LASTPROB" = "$i"
        then
            LASTPROB=""
        fi
    fi
done | tee -a $OUTFILE

if test -d $GMSDIR
then
  rm $GMSDIR/*
  rmdir $GMSDIR
fi

date >>$OUTFILE
date >>$ERRFILE

./evalcheck_gams.sh $OUTFILE
