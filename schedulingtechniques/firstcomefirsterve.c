#include<stdio.h>
int main()
{
int n,i,temp,j,t=0,sw=0,st=0;
float tput,wt,tt;
//t is the total time for completingt all the processes
printf("Enter the number of processes: ");
scanf("%d",&n);
int pnum[n],burst[n],arrival[n],wait[n],resp[n],turn[n];
for(i=0;i<n;i++)
{
printf("Enter the details for process number %d\n",i+1);
printf("Process number: ");
scanf("%d",&pnum[i]);
printf("Burst time: ");
scanf("%d",&burst[i]);
printf("Arrival time: ");
scanf("%d",&arrival[i]);
}
printf("Sorting on the basis of arrival time for first come first serve\n");
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if (arrival[j]<arrival[i])
{
temp = arrival[j];
arrival[j] = arrival[i];
arrival[i] = temp;
temp =burst[j];
burst[j]=burst[i];
burst[i]=temp;
temp=pnum[i];
pnum[i]=pnum[j];
pnum[j]=temp;
}
}
}
printf("Sorting has been done\n");
printf("Process number		Arrival time		Burst time\n");
for(i=0;i<n;i++)
{
printf("%d			 %d		 	%d\n",pnum[i],arrival[i],burst[i]);
}
//first process will be done always
printf("%d process is performed now\n",pnum[0]);
t=arrival[0];
t=t+burst[0];
wait[0]=0;
resp[0]=0;
turn[0]=burst[0];
for(i=1;i<n;i++)
{
printf("%d process is performed now\n",pnum[i]);
if (arrival[i]>=t)
{
wait[i]=0;
resp[i]=0;
turn[i]=burst[i];
t=t+burst[i]+(arrival[i]-t);
}
else
{
wait[i]=t-arrival[i];
resp[i]=t-arrival[i];
turn[i]=wait[i]+burst[i];
t=t+burst[i];
}
}
printf("\n\n");
printf("All tasks are now performed\n");
tput=(float)(n/t);
for(i=0;i<n;i++)
{
sw=(float)(sw+wait[i]);
st=(float)(st+turn[i]);
}
wt=(sw/n);
tt=(st/n);
printf("Process number		Arrival time		Burst time		Wait Time		Turnaround time\n");
for(i=0;i<n;i++)
{
printf("%d			 %d		 	%d		 	%d 			%d\n",pnum[i],arrival[i],burst[i],wait[i],turn[i]);
}
printf("Throughput is %f\n",tput);
printf("Average wait time is %f\n",wt);
printf("Average turnaround time is %f\n",tt);
return 0;
}

