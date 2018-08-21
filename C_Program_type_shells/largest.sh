#!/bin/bash
read -p "Enter a number: " var1
read -p "Enter another number: " var2
read -p "Enter another number: " var3
if [ $var1 \> $var2 -a $var1 \> $var3 ] # \> is used for comparision and -a is used for and
then
	echo $var1 "is greatest"
elif [ $var2 \> $var1 -a $var2 \> $var3 ]
then
	echo "$var2 is greatest"
else
	echo $var3 "is greatest"
fi
