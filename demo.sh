#!/bin/bash
echo "Enter num1"
read num1
echo "Enter num2"
read num2
echo " $num1+$num2=$((num1+num2))
 $num1-$num2=$((num1-num2))
 $num1*$num2=$((num1*num2))
 $num1/$num2=$((num1/num2))" > $1/file-$(date '+%Y_%m-%d-%H_%M').log
