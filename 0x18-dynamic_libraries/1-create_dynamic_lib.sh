#!/bin/bash

shopt -s nullglob

c_files=( $(ls *.c | grep -v "0-main.c") )
name="liball.so"

shopt -u nullglob

if [ ${#c_files[@]} -eq 0 ]; then
    echo "No .c file found"
else
   for file in "${c_files[@]}"; do
       if [ "$file" != "0-main.c" ]; then
           gcc -fpic -c "$file"
       fi
   done
fi

gcc -shared -o "$name" *.o
