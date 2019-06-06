#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
int i = 0;
cout<<"Command Line Argument Code"<<endl;
cout<<"Number of arguments entered:\t"<<argc<<endl;
cout<<"File name is:\t"<<argv[0]<<endl;
if (argc == 1)
{
cout<<"No other Inputs"<<endl;
}
else
{
cout<<"Other Inputs are:"<<endl;
for (i=1;i<argc;i++)
{
cout<<i<<"th Output is: "<<argv[i]<<endl;
}
}
}

