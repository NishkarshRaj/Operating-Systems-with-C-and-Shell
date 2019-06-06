#!/bin/bash
echo "Basic Calculator"
read -p "Enter a number: " num1
read -p "Enter another number: " num2
echo "Sum of two numbers is: " $(($num1+$num2)) 
echo "Difference of two number is : " $(($num1-$num2))
echo "Multiplication of two numbers is: " $(($num1*$num2))
echo "Division of two numbers is: " $(($num1/$num2))
