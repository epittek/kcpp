#!/bin/bash

progress-bar() {
  local duration=${1}

    already_done() { for ((done=0; done<$elapsed; done++)); do printf "."; done }
    remaining() { for ((remain=$elapsed; remain<$duration; remain++)); do printf " "; done }
    percentage() { printf "| %s%%" $(( (($elapsed)*100)/($duration)*100/100 )); }
    clean_line() { printf "\r"; }

  for (( elapsed=1; elapsed<=$duration; elapsed++ )); do
      already_done; remaining; percentage
      sleep 1
      clean_line
  done
  clean_line
}

printf "%s\n" "make clean......."
make clean
#rm -rf Makefile {CM,cm}ake*

printf "%s\n" "rm -rf EVERYTHING!......."
rm -rf Makefile [Cc][Mm]ake* log.txt xor.ppm

#progress-bar 10 # ;)

