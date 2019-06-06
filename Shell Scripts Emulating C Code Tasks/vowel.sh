#!/bin/bash
read -p "Enter a character: " var1
if [ $var1 == 'a' ] || [ $var1 == 'e' ] || [ $var1 == 'i' ] || [ $var1 == 'o' ] || [ $var1 == 'u' ]  #Spaces needed
then
	echo "Vowel"
else
	echo "Consonants!!"
fi
