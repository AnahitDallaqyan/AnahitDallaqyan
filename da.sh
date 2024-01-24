#!/bin/bash
folder_path="$1"
iterate_folder() {
    local folder="$1"
for item in "$folder"/*; do
        if [ -f "$item" ]; then
         echo "$item"
        elif [ -d "$item" ]; then
            iterate_folder "$item"
        fi
done
}

iterate_folder "$base_folder_path"
