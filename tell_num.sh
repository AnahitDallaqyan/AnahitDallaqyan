#!/bin/bash
file_path=$1
pattern='^(0|\(\+374\)\s?)?\d{2}([- ]?\d{2}){2}([- ]?\d{2})$'
while IFS='' read -r line 
do
 if [[ "$line" =~ "$pattern" ]]
 then
        echo "$line" > tel_num.log
 fi
done < "$file_path"
echo "done"
