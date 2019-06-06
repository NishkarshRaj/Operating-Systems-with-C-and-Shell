// C program to illustrate 
// pipe system call in C 
// shared by Parent and Child 
#include <stdio.h> 
#include <unistd.h> 
#include<stdlib.h>
#define MSGSIZE 16 
char* child;
char* parent;
  
int main() 
{ 
    char inbuf[MSGSIZE]; 
    int p[2], pid, nbytes; 	
    //p[2] means a communcication challel is created with 2 pipes
    //pid is to get the pipe
  
    if (pipe(p) < 0) 
        exit(1); 
    //exit when channels are not created
  
    /* continued */
    if ((pid = fork()) > 0) 
    { 
	//parent process
	int i;
	//for(i=1;i<5;i++)
	//{
	//FILE *parent;
	//fp = fopen("pipe.txt","a");
	printf("Enter the string you want to send to child via pipe\n");
	scanf("%s",&parent);
        write(p[1], parent, MSGSIZE); 
	close(p[1]); 
 	wait(NULL);
	//}
        
    } 
  
    else { 
        // Adding this line will 
        // not hang the program 
        close(p[1]); 
        while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0) 
	{
	    printf("In while block\n");
	    child = inbuf;
            printf("Entering the piped data into child variable\n");
	    printf("The piped data stored in child variable is: %s\n",child);
	}
        if (nbytes != 0) 
            exit(2); 
        printf("Finished reading\n"); 
    } 
    return 0; 
}
