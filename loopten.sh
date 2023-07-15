#!/bin/bash

mkdir output
cd output

for i in {1..10}; do
	echo "Loop $i"
	touch "result$i"
done

