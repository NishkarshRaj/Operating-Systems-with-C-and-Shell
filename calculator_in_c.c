#include<stdio.h>
void add(float x,float y)
{
float add1 = x+y;
printf("Addition of numbers is: %f",add1);
}
void divide(float x,float y)
{
float div1 = x/y;
printf("Division of numbers is: %f",div1);
}
float sub(float x, float y)
{
float sub1 = x-y;
return sub1;
}
float mul(float x,float y)
{
float mul1 = x*y;
return mul1;
}
int main()
{
float x,y;
printf("Enter two numbers!!");
printf("\n");
scanf("%f%f",&x,&y);
printf("Option Menu");
printf("\n");
printf("1) Addition of numbers");
printf("\n");
printf("2) Division of numbers");
printf("\n");
printf("3) Subtraction of numbers");
printf("\n");
printf("4) Multiplication of numbers");
printf("\n");
int ch;
printf("Enter your choice!!");
scanf("%d",&ch);
float r;
switch(ch)
{
case 1: add(x,y);
printf("\n");
break;
case 2: divide(x,y);
printf("\n");
break;
case 3: 
r = sub(x,y);
printf("Subtracted value is: %f",r);
printf("\n");
break;
case 4: 
r = mul(x,y);
printf("Multiplied value is %f",r);
printf("\n");
break;
default: printf("Wrong choice entered!!");
}
}
