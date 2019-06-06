#!/bin/bash
echo "Case Switch function"
read -p "Enter your string: " input_string
case $input_string in
	Hello)
		echo "Hello Friend"
		;;
	Bye)
		echo "Bye Bruh"
		;;
	*)
		echo "Mr. Stark! I do not understand!!! Is it to late now to say sorry?"	
		;;
esac

