#!/bin/bash

for ((i=1; i<=10; i++)); do
    echo "This is message $i"
    mkdir -p output
    touch "output/result$i"
done

