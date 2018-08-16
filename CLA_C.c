#include<stdio.h>
int main(int argc,char *argv[])
{
printf("Program name is %s",argv[0]);
printf("\n");
if (argc > 0)
{
int i;
for (i=1;i<argc;i++)
{
printf("%d argument is %s",i,argv[i]);
printf("\n");
} 
}
}
