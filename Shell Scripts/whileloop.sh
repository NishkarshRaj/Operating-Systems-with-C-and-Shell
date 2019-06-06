#!/bin/bash
echo "While loop"
read -p "Enter Your name: " input_string
while [ $input_string != "Stop" ]
do
	read -p "Enter A String/Stop to exit: " input_string
	echo "Amigo Bruh!!"
	echo "You entered $input_string"
done

