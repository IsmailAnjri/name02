#!/bin/bash

path=$(pwd)
log_file="$path/script.log"

mkdir "$path/reports" &>> "$log_file"
touch "$path/reports/file.log" &>> "$log_file"

mkdir "$path/trash" &>> "$log_file"
cd "$path/trash"

for ((i=1; i<=10; i++)); do
    filename="file$i.$(openssl rand -hex 2)"
    touch "$filename"
done

cd "$path"
echo "Steps A and B have been completed." | tee -a "$log_file"
rm -rf "$path/trash"/* &>> "$log_file"

echo "Step D has been completed." | tee -a "$log_file"
less "$log_file"

