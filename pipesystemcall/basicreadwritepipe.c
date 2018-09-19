// C program to illustrate 
// pipe system call in C 
#include <stdio.h> 
#include <unistd.h>   
int main() 
{ 
    char r[32],w[32];  //variables for read and write
    int p[2], i; //integer value array of size 2 for two communication nodes ==>> either half duplex or full duplex   
    if (pipe(p) < 0) //pipe is the in bulit function in the unistd library for communication with buffer using stream
        exit(1); 
  //pipe returns: 0 for read 1 for outpt 2 for error
    /* continued */
    /* write pipe */
    printf("Enter a string of size less than 32: ");
scanf("%s",&w);
    write(p[1],(char*)w,sizeof(w));  //In c typecast only as (datatype)variable
printf("Written content to the buffer\n");
printf("Lets read the content from the buffer\n");    
        read(p[0],(char*)r, sizeof(r)); 
   printf("The value read from the buffer is: %s\n",r); 
 return 0; 
} 


//This is an example of simplex!!! no its an exmple of 1 user sending and receiving the data
//for multiple users we need forking process
//for simplex: 1 user enters the data and 1 user reads
//for half duplex: 1 user sends the data other sees it and replies to it and repeat this process
//for full duplex: both users sends and recives data simultanieously as done in controlled case of fork process
