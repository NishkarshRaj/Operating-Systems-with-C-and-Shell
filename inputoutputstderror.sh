#!/bin/bash
read -p "Enter a string (default data type for bash): " var
echo "Standard output is: ${var}"
echo "Standard error is: " >&2
