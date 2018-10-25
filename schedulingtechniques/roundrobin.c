#include<stdio.h>
int main()
{
int n,i,j,temp,sw=0,st=0,t=0,q,t1=0,flag1=0,k;
float tput,wt,tt;
printf("Enter the number of processes: ");
scanf("%d",&n);
printf("Enter the time quantum: ");
scanf("%d",&q);
int pnum[n],burst[n],wait[n],turn[n],flag[n],count,b[n],last[i];;
for(i=0;i<n;i++)
{
printf("Enter the details for process number %d\n",i+1);
printf("Enter the process number: ");
scanf("%d",&pnum[i]);
printf("Enter the burst time: ");
scanf("%d",&burst[i]);
flag[i]=0;
wait[i]=0;
turn[i]=0;
last[i]=0;
}
for(i=0;i<n;i++)
{
b[i]=burst[i]; //storing burst time as they will be changed later
turn[i]=turn[i]+burst[i];
t=t+burst[i];
}
printf("Total compilation will take %d time\n",t);
//////////
/////////////////////////////////////////
while(flag1!=1)
{
	for(i=0;i<n;i++)
	{
	if((burst[i]>q)&&(flag[i]==0))
		{
		 if(wait[i]==0)
		{
		wait[i]=t1;
		}
		else
		{
	k= t1-last[i];
		wait[i]=wait[i]+k;
		}
		printf("Process %d is running!!\n",i+1);
		t1=t1+q;
		burst[i]=burst[i]-q;
		last[i]=t1;
		}
	else if ((burst[i]<=q)&&(flag[i]==0))
		{
	if(wait[i]==0)
	wait[i]=t1-last[i];
	else
	{
	k=t1-last[i];
	wait[i]=wait[i]+k;
	}
		printf("Process %d is running!!\n",i+1);
		t1=t1+burst[i];
		last[i]=t1;
		flag[i]=1;
		}
	}
	count=0;
		for(i=0;i<n;i++)
		{
		if(flag[i]==1)
		count=count+1;
		}
if(count==n)
flag1=1;
}
////////////////////////////////////////////////////////////
for(i=0;i<n;i++)
{
turn[i]+=wait[i];
}

for(i=0;i<n;i++)
{
sw=sw+wait[i];
st=st+turn[i];
}
tput=(float)n/t;
wt=(float)(sw/n);
tt=(float)(st/n);
printf("Process number		Burst time		Wait time		Turaround time\n");
for(i=0;i<n;i++)
{
printf("%d		 	%d 			%d 			%d\n",pnum[i],b[i],wait[i],turn[i]);
}
printf("Throughput : %f\n",tput);
printf("Average waiting time: %f\n",wt);
printf("Average turnaround time: %f\n",tt);
return 0;
}
