#!/bin/bash
#remove previous (if exists) directory with same name
rm -r new_directory
echo ""
echo "15 commands in one Shell Script"
echo ""
echo "1) Date"
date
echo ""
echo "2) Time"
time
echo ""
echo "3) Calender"
cal
echo ""
echo "4) List Files"
ls
echo ""
echo "5) Make Directory"
mkdir new_directory
echo ""
echo "6) Enter Directory"
cd new_directory
echo ""
echo "7) Make a File In a text Editor"
gedit Nish.txt
echo ""
echo "See all files in reverse date fashion with author and priviliges"
echo ""
ls -ltr
echo ""
echo ""
echo "See content of files"
echo ""
cat Nish.txt
echo ""
echo ""
echo "9) Renaming file with move option (Changing nish.txt to Scripting.txt)"
mv Nish.txt Scripting.txt
echo ""
echo "Content matching Hello case insensitively in Scripting .txt"
grep -i "HeLlO" Scripting.txt
echo ""
echo "11) Leaving a directory to its superfolder"
cd ..
echo ""
echo "12) Knowing the Present working Directory"
pwd
echo ""
cd new_directory
echo ""
echo "13) Deleting existing files"
rm Scripting.txt
echo ""
echo "14) Deleting Directory"
cd ..
rmdir new_directory
echo ""

