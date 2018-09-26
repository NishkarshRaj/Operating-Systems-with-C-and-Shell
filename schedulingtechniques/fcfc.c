#include<stdio.h>
int main()
{
int n,i,temp,j,comptime=0;
float throughput,avgwait=0,avgturn=0;
printf("FCFS tasks\n");
printf("Enter the number of processes you want to perform: ");
scanf("%d",&n);
//printf("Creating the arrays of processes in function\n");
int process[n],burst[n],arrival[n],response[n],wait[n],turnaround[n];
response[0]=0;
wait[0]=0;
for(i=0;i<n;i++)
{
printf("Enter the process number, burst time and arrival time for %d process:\n",i+1);
printf("Process number: ");
scanf("%d",&process[i]);
printf("Burst time: ");
scanf("%d",&burst[i]);
printf("arrival time: ");
scanf("%d",&arrival[i]);
printf("\n\n");
}
printf("Sorting the array by arrival time for FCFS\n");
for(i=0;i<n;i++)
{
for(j=i;j<n-1;j++)
{
if(arrival[j]>arrival[j+1])
{
temp=arrival[j];
arrival[j]=arrival[j+1];
arrival[j+1]=temp;
temp=burst[j];
burst[j]=burst[j+1];
burst[j+1]=temp;
temp=process[j];
process[j]=process[j+1];
process[j]=temp;
}
}
}
//main process
for(i=0;i<n;i++)
{
if(i==0)
{
response[0]=0;
comptime+=burst[0];
i++;
}
	else //if ((i+1)<=n)
	{
	//if (arrival[i]<burst[i-1])
	//{
	response[i]=comptime;
	comptime+=burst[i];
	i++;
	}
	//else
	//{
	//response[i]=comptime+(arrival[i]-burst[i-1]);
	//comptime=comptime+burst[i]+(arrival[i]-burst[i-1]);
	//i++;
	//}
	//}

}
printf("Completion time taken is: %d\n",comptime);
throughput=n/comptime;
//printf("Throughput is: %f",throughput);
for(i=0;i<n;i++)
{
wait[i]=response[i]-arrival[i];
avgwait+=wait[i];
turnaround[i]=wait[i]+burst[i];
avgturn+=turnaround[i];
}
avgwait/=n;
avgturn/=n;
printf("Process\tArrival\tBurst\tResponse\twait\tturnaround\n");
for(i=0;i<n;i++)
{
printf("%d\t %d \t%d \t%d \t%d \t%d\n",process[i],arrival[i],burst[i],response[i],wait[i],turnaround[i]);
}
printf("\n\n");
printf("Throughput: %f\n",throughput);
printf("Average turnaround time: %f\n",avgturn);
printf("Average wait time: %f\n",avgwait);
return 0;
}
