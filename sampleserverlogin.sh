echo "Sample Server Grep content matching"
echo "Available files are: " 
ls
echo "Current Process running live are: "
ps
read -p "Enter Access logs filename where you want to check string: " log
read -p "Enter a string to content match in above file: " var
grep $var -c $log > log1.txt
grep $var -n $log > log2.txt
echo "Number of lines matched are stored in log1.txt file and lines matched are stored in log2.txt"
in="y"
while [ $in != "n" ]
do
echo "Press 1) Count of lines matching"
echo "Press 2) Matching Lines"
read -p "Enter your choice: " ch
case $ch in
	1) echo "Number of lines matching are: "
	cat log1.txt
        ;; 
	2) echo "Matching lines are"
	cat log2.txt
	;;
	*) echo "Invalid option"
	;;
esac
read -p  "Press n to exit else continue: " in
reset
done
