#!/bin/sh

gcc main.c libft.a

value=-1

while [ $value -ne 0 ]
do
./a.out $value
value=$?
done

rm a.out