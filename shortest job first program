#include<stdio.h>
#include<string.h>
main()
{
	int et[20],at[20],n,i,j,temp,st[10],ft[10],wt[20],ta[20];
	int totwt=0,totta=0;
	float awt,ata;
	char pn[10][10],t[10];
	printf("Enter no of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter process name,arrival time & exeution time:");
		scanf("%s%d%d",pn[i],&at[i],&et[i]);
	}
	for(i=0;i<n;i++)
	
	for(j=0;j<n;j++)
	{
			if(et[i]<et[j])
			{
				temp=at[i];
				at[i]=at[j];
				at[j]=temp;
				temp=et[i];
				et[i]=et[j];
				et[j]=temp;
				strcpy(t,pn[i]);
				strcpy(pn[i],pn[j]);
				strcpy(pn[j],t);
			}
	}
	
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			st[i]=at[i];
		}
		else
		{
			st[i]=ft[i-1];
	
		}
		wt[i]=st[i]-at[i];
		ft[i]=st[i]+et[i];
		ta[i]=ft[i]-at[i];
		totwt+=wt[i];
		totta+=ta[i];
   }
		awt=(float)totwt/n;
		ata=(float)totta/n;
		printf("\npname\t arrivaltime\t executiontime\t waitingtime\t tattime");
		for(i=0;i<n;i++)
		{
			printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d",pn[i],at[i],et[i],wt[i],ta[i]);
		}
		printf("\n average waiting time is:%f",awt);
	   printf("\n average turn around time is:%f",ata);
	
	//}
	
}






output:

Enter no of processes:3
Enter process name,arrival time & exeution time:1 3 5
Enter process name,arrival time & exeution time:2 3 2
Enter process name,arrival time & exeution time:3 4 1

pname    arrivaltime     executiontime   waitingtime     tattime
3           4               1               0               1
2           3               2               2               4
1           3               5               4               9
 average waiting time is:2.000000
 average turn around time is:4.666667
