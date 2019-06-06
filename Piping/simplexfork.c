#include <stdio.h> 
#include <unistd.h> 
#include<stdlib.h>
int main()
{
char r[32],w[5][32];
int pid,p[2],i; 
  
   if (pipe(p) < 0) 
{
printf("Communication channel not built!! Exiting program\n");
   exit(1); 
}
pid = fork();
if (pid == 0)
{
//childprocess
for (i = 1; i <= 5; i++)
{
printf("Child process\n");
printf("Enter the string to be written to the buffer: ");
scanf("%s",&w[i]);
write(p[1],(char*)w[i],sizeof(w[i]));
sleep(1);
}
}
else
{
//parentprocess
for (i = 1; i <= 5; i++)
{
printf("Parent process\n");
//printf("Reading the value from buffer: \n");
read(p[0],(char*)r,sizeof(r));
printf("Value read from the buffer is: %s\n",r);
sleep(1);
}
}
  
return 0;
}


