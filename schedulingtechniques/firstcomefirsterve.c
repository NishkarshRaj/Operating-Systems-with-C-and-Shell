#include<stdio.h>
int main()
{
int n,i,temp,j;
printf("Enter the number of processes: ");
scanf("%d",&n);
int pnum[n],burst[n],arrival[n];
for(i=0;i<n;i++)
{
printf("Enter the details for process number %d\n",i+1);
printf("Process number: ");
scanf("%d",&pnum[i]);
printf("Burst number: ");
scanf("%d",&burst[i]);
printf("Arrival number: ");
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
return 0;
}

