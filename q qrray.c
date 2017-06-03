#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void add();
void del();
void display();
int q[MAX];
int front=-1;
int rear=-1;
main()
{
	int choice;
	while(1)
	{
		printf("1:addtion\n");
		printf("2:delete\n");
		printf("3:display\n");
		printf("4:quit\n");
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
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("wrong choice\n");
				break;
		}
	}
	return 0;
}
void add()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
	if(rear==-1)
	{
		rear=rear+1;
		front=front+1;
		q[rear]=x;
		q[front]=x;
	}
	else if(rear==MAX-1)
	{
		printf("list is full\n");
	}
	else
	{
		rear=rear+1;
		q[rear]=x;
	}
}
void del()
{
	if(front==-1)
	{
		printf("empty queue\n");
	}
	else if(front==0 && rear==0)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=front+1;
		
	}
}
void display()
{   if(front==-1)
  {
  	printf("empty queue\n");
  }
	int x,i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",q[i]);
	}
	
	
}
