#include<stdio.h>
int main()
{
int n,i,j,temp,sw=0,st=0,t=0;
float tput,wt,tt;
printf("Enter the number of processes: ");
scanf("%d",&n);
int pnum[n],burst[n],wait[n],turn[n];
for(i=0;i<n;i++)
{
printf("Enter the details for process number %d\n",i+1);
printf("Enter the process number: ");
scanf("%d",&pnum[i]);
printf("Enter the burst time: ");
scanf("%d",&burst[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if (burst[j]<burst[i])
{
temp =burst[j];
burst[j]=burst[i];
burst[i]=temp;
temp=pnum[i];
pnum[i]=pnum[j];
pnum[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
wait[i]=t;
t=t+burst[i];
turn[i]=wait[i]+burst[i];
}
for(i=0;i<n;i++)
{
sw=sw+wait[i];
st=st+turn[i];
}
tput=(float)(n/t);
wt=(float)(sw/n);
tt=(float)(st/n);
printf("Process number		Burst time		Wait time		Turaround time\n");
for(i=0;i<n;i++)
{
printf("%d		 	%d 			%d 			%d\n",pnum[i],burst[i],wait[i],turn[i]);
}
printf("Turnaround time : %f\n",tput);
printf("Average waiting time: %f\n",wt);
printf("Average turnaround time: %f\n",tt);
return 0;
}
