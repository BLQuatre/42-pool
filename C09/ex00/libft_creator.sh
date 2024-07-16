#!/bin/sh



C_FILES=$(find . -type f -name "*.c" -print0 | xargs -0 -n1 basename)

for i in $C_FILES
do
	gcc -c $i
done

O_FILES=$(find . -type f -name "*.o" -print0 | xargs -0 -n1 basename)

gcc -shared $O_FILES -o libft.a
