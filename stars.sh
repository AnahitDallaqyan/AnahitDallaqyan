#!/bin/bash
options="zip tar"
filename=*.log
echo "Please select the archiving type:"
PS3=Select:
select option in $options
do
	if [[ $option == "tar" ]]
	then
	for f1 in $1/$filename
	do	
		echo `tar -cvf $1/$(basename -s .log $f1).tar --absolute-names $f1`
	done
	else
	       for f1 in $1/$filename
	       do 	       
		       echo  `zip $1/$(basename -s .log $f1).zip $f1`
	       done
	fi
	break
done
