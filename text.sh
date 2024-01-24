#!/bin/bash

number=$(( $RANDOM ))
counter=0
echo "Guess my number"
for (( ; ;))
do 
	read num
	counter=$(( counter+1 ))
	if [[ $num -eq $number ]]
	then
		echo "Congratulations! You guessed the number in $counter attempts."
		break
	elif [[ $num -gt $number ]]
	then 
		echo "Too high!Try again"
		continue 
	else 
		echo "Too low!Try again"
		continue
	fi
done
