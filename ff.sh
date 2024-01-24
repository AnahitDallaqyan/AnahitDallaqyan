#!/bin/bash
counter=0
counter1=0
folder_recurse() {
for name in "$1"/*
do
	if [ -d "$name" ] ; then
        echo "Path: $name"
	folder_recurse "$name"
	counter=$(( counter+1 ))
	elif [ -f "$name" ] ; then
	echo "Path: $name"
	counter1=$(( counter1+1 ))
	fi
done
}
folder_recurse "$1"
echo "files:$counter1"
echo "folders:$counter"
