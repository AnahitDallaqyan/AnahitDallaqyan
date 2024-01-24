file=$1
word=$2
#column=$3
while IFS= read -r line 
do
sed -i '/\S\+\s\+$word/d' "$file"
#sed -i '/Doe$/d' $file
done < "$file"
