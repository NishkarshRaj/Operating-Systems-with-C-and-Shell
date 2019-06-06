#!/bin/bash
echo "Swapping the value of two variables"
read -p "Variable 1: " var1
read -p "Variable 2: " var2
var3=$var1
var1=$var2
var2=$var3
echo "After swapping, Value of Variable 1 is $var1 and Second Variable is $var2"

