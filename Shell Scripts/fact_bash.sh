#!/bin/bash
echo "Bash Script to read variable as integer from user, send it to C code to find its factorial, send it to bash and print it to the user"
read -p "Enter a variable: " num
./a.out $num; echo $? #here echo$? works well for input until 5 but fails above as stores only 1 byte (255 is max integer to store)


