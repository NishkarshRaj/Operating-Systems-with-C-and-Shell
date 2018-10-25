#include<stdio.h>
int main()
{
int n,i,j,temp,count=0,cmptime=0;
printf("Enter the number of processes you want: ");
scanf("%d",&n);
int pnum[n],arr[n],burst[n],wait[n],turn[n];
for(i=0;i<n;i++)
{
printf("\n\nEnter details for process %d\n",i+1);
pnum[i]=i+1;
printf("Enter the arrival time: ");
scanf("%d",&arr[i]);
printf("Enter the burst time: ");
scanf("%d",&burst[i]);
wait[i]=0;
turn[i]=0;
count++;//number of processes loaded into ram
}
system("reset");
printf("Sorting the process by arrival time\nIf arrival times have collision, lower burst process have higher priority\n");
////////sorting on the basis of arrival time
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
temp=pnum[j];
pnum[j]=pnum[i];
pnum[i]=temp;
temp=burst[j];
burst[j]=burst[i];
burst[i]=temp;
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[i]=arr[j])
{
if (burst[j]>burst[i])
{
temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
temp=pnum[j];
pnum[j]=pnum[i];
pnum[i]=temp;
temp=burst[j];
burst[j]=burst[i];
burst[i]=temp;
}
}
}
}
////////
system("reset");
printf("Showing the processes after sorting\n");
printf("Process number		Arrival time 		Burst Time\n");
for(i=0;i<n;i++)
{
printf("%d			%d			%d\n",pnum[i],arr[i],burst[i]);
}
///////
printf("Performing the processes\n");
i=0;
while(count)
{
printf("Number of processes in RAM at %d time are %d\n",cmptime,count);
if(((cmptime+burst[i])<arr[i+1])&&((i+1)<n))
{
cmptime=cmptime+burst[i];
printf("%d process is completed\n",i+1);
count--;
}
else if(((cmptime+burst[i])>arr[i+1])&&((i+1)<n))
{
////sorting the processes
}
}
return 0;
}
