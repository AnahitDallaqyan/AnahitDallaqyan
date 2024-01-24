#!/bin/bash
set -x
dir_path=$1
name=$2
folder=new_$2_folder
mkdir "$folder"
files=`find "$dir_path" -type f -name "$name*"` 
for file in $files 
do 
	cp "$file" "$folder"
done
zip -r  "$folder".zip "$folder"
echo "Done"
