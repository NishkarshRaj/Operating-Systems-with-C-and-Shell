#include <stdio.h> 
#include <unistd.h> 
#include<stdlib.h>
int main()
{
char r[32],w1[5][32],w2[5][32];
int pid,p[2],i,nbytes; 
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
close(p[1]);
read(p[0],(char*)r,sizeof(r));
printf("The buffer value read from child process written by parent process is: %s\n",r);
//printf("Child process\n");
printf("Enter the string to be written to the buffer by child process: ");
scanf("%s",&w1[i]);
write(p[1],(char*)w1[i],sizeof(w1[i]));
close(p[1]);
sleep(5);
}
}
else
{
//parentprocess
for (i = 1; i <= 5; i++)
{
close(p[1]);
read(p[0],(char*)r,sizeof(r));
printf("The buffer value read from parent process written by child process is: %s\n",r);
//printf("parent\n");
printf("Enter the string to be written to the buffer by parent process: ");
scanf("%s",&w2[i]);
write(p[1],(char*)w2[i],sizeof(w2[i]));
close(p[1]);
sleep(5);
}
}
return 0;
}


