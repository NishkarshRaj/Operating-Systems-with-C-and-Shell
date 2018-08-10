#!/bin/bash
echo "Welcome to First Read and Write Program of Unix!!!"
echo "Enter Your Name!"
read name
echo "Hello" $name
echo "Let's See Your Login Details"
echo "Enter your Username"
echo "Enter Your Password"
read -p "Username: " username1
read -sp "Password: " password1
echo ""
echo "Your Password is:" $password1
echo "Thanks for Using this page!!!"
