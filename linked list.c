#include<stdio.h>
#define max 5
void enqueue(int);
int dequeue();
void display();
int front=-1,rear=-1,q[max];
main()
{
	int x,y,n;
	do
	{
		printf("\nenter choice\n1.insert\n2.delete\n3.display\n4.exit");
		scanf("%d",&x);
		switch(x)
		{
			case 1:printf("\nenter elements into queue");
			       scanf("%d",&y);
			       enqueue(y);
			       break;
			case 2:n=dequeue();
			       printf("\n%d is deleted",n);
			       break;
			case 3:display();
			       break;
			case 4:printf("\nexit");
			       break;
		}
	}while(x!=4);
}
void display(void)
{
	int i;
	for(i=front;i<=rear;i++)
	{
	   printf("\n%d",q[i]);
    }	
}
void enqueue(int x)
{
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		q[rear]=x;
	}
	else if(front==0&&rear==max-1)
	{
	    printf("\noverflow");	
	}
	else
	{
		rear=rear+1;
		q[rear]=x;
	}
}
int dequeue()
{
	int y;
	if(front==-1&&rear==-1)
	{
		   printf("\nunderflow");
	}
	else if(front>rear)
	{
		printf("\nunderflow");
	}
	else
	{
		y=q[front];
		front++;
	}
	return y;
	}
