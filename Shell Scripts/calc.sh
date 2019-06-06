#!/bin/bash
echo "Calculator Code By Bash Scripts"
echo "Enter Two Numbers"
read num1
read num2
echo "Enter Your Choice in following"
echo "1) Addition"
echo "2) Subtraction"
echo "3) Multiply"
echo "4) Divide"
read ch
if [ $ch == '1' ]
then
	echo $(($num1+$num2)) 
elif [ $ch == '2' ]
then 
	echo $(($num1-$num2))
elif [ $ch == '3' ]
then
	echo $(($num1*$num2))
elif [ $ch == '4' ]
then
	bc <<< "scale = 10 ; ($num1/$num2)"
fi
echo "Thanks for watching code"
