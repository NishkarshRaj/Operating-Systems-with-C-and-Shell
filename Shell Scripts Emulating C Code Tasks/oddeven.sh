#!/bin/bash
read -p "Enter a number: " var1
if (( $var1 % 2 == 0))
then 
	echo "Even Number"
else
	echo "Odd Number"
fi
