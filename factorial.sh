#!/bin/bash

factorial () {
num=$1
if [ "$num" = 0 ]
then 
	echo "1"
else
	factorial2=$( factorial "$((num -1))")	
	echo "$((factorial2 * num))"
fi

}
factorial $1

