#!/bin/bash
read -p "Enter number whose Factorial you want: " num
p=1
one=1
while [ $num \> 0 ]
do
p=$(($p*$num))
num=$(($num-$one))
done
echo "The factorial is: $p"

