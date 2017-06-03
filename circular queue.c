#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front =-1;
int rear=-1;
int cq[MAX];
void add();
void del();
void disp();
main()
{
	int choice;
	while(1)
	{
		printf("1:addtion\n");
		printf("2:deletion\n");
		printf("display\n");
		printf("4:exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				add();
				break;
			case 2:
				del();
				break;
			case 3:
				disp();
				break;
			case 4:
				exit(1);
			default:
				printf("wrong choice\n");
				break;
		}
	}
	return;
}
void add()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
	if(front==-1 && rear==MAX-1 || front==rear+1)
	{
		printf("q is full\n");
		return;
	}
	
	if(front==-1)
	{
		front=0;
		rear=0;
		
		cq[rear]=x;
		return;
	}
	if(rear==MAX-1)
	{
		rear=0;
		cq[rear]=x;
		return;
		
	}
	else
	{
		rear=rear+1;
		cq[rear]=x;
	}
}
void del()
{
	if(front==-1)
	{
	printf("empty\n");
	return;
    }
    if(front==MAX-1)
    {
    	front=0;
    	return;
    }
    else
    {
    	front=front+1;
    }
    
}
void disp()
{
	int f=front;
	int r=rear;
	if(f==-1)
	{
		printf("empty\n");
		return;
	}
	if(front<=rear)
	{
		while(f<=r)
		{
			printf("%d\n",cq[f]);
			f++;
		}
		return;
	}
	else
	{
		while(f<=MAX-1)
		{
			printf("%d\n",cq[f]);
			f++;
		}
		f=0;
		while(f<=rear)
		{
			printf("%d\n",cq[f]);
			f++;
		}
	}
}
