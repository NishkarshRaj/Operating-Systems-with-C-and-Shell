#!/bin/bash
echo "Hello Coder!..."
while :
do
echo "Option Menu:"
echo "1) C Program"
echo "2) C++ Program"
echo "3) Sh Program"
echo "4) Quit"
read -p "Enter your choice: " ch
clear
case $ch
in
1)
echo "Lets code in C"
read -p "Enter filename: " filename
filename="$filename.c"
cp sample.c createdcodes/
cd createdcodes
mv sample.c $filename
gedit $filename
echo "File created!! compiling.."
gcc $filename
echo "Your output is: "
./a.out
;;
2)
echo "Lets code in C++"
read -p "Enter filename: " filename
filename="$filename.cpp"
cp sample.cpp createdcodes/
cd createdcodes
mv sample.cpp $filename
gedit $filename
echo "File created!! compiling.."
g++ $filename
echo "Your output is: "
./a.out
echo ""
;;
3)
echo "Let's create shell scripts!!"
read -p "Enter filename: " filename
filename="$filename.sh"
cp sample.sh createdcodes/
cd createdcodes/
mv sample.sh $filename
echo "Adding executable permissions to the file.."
chmod +x $filename
echo "Lets create the file..."
gedit $filename
echo "Let's run the file"
./$filename
;;
4)
echo "Exiting the script!! Thank you for the use!!"
break
;;
*)
echo "Option not found!!!"
;;
esac
read -p "Enter Y/y to quit the workflow else it would continue!!: " inp
clear
done
