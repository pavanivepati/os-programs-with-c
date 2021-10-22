#include<stdio.h>
struct fcfs
{
	int at,st,str,ft,tat,wt;
}p[50];
int main()
{
	int i,j,n;
	float atrt=0,awt=0;
	printf("\n enter the number of processes:");
	scanf("%d",&n);
	printf("\n enter the arrival time of the processes");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].at);
	}
	printf("\n enter the service times of the processes");
	for(i=0;i<n;i++)
	   scanf("%d",&p[i].st);
	p[0].str=p[0].at;
	for(j=0;j<n;j++)
	{
		p[j].ft=p[j].str+p[j].st;
		p[j+1].str=p[j].ft;
	}
	for(i=0;i<n;i++)
	{
		p[i].tat=p[i].ft-p[i].at;
		atrt=atrt+p[i].tat;
		p[i].wt=p[i].str-p[i].at;
		awt=awt+p[i].wt;
	}
	printf("process\tAT\tST\tSTR\tFT\tTAT\tWT\n");
	for(i=0;i<n;i++)
	{
		printf("p%d\t%d\t%d\t%d\t%d\t%d\t%d\n");
	
	}
	atrt=atrt/n;
	awt=awt/n;
	printf("Average turn around time=%f",atrt);
    printf("Average waiting time=%f",awt);
	
}




