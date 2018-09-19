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
    write(p[1],(char*)w,sizeof(w));  
printf("Written content to the buffer\n");

printf("Lets read the content from the buffer\n");    
        read(p[0],(char*)r, sizeof(r)); 
   printf("The value read from the buffer is: %s",r); 
 return 0; 
} 

