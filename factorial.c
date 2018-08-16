#include<stdio.h>
int main(int argc,char *argv[])
{
int a = atoi(argv[1]);
printf("%d",a);
printf("\n");
int p = 1;
while (a>0)
{
p = p*a;
a = a - 1;
}
printf("Factorial is: %d",p);
printf("\n");
}
