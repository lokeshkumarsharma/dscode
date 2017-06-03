#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int q[MAX];
int front=-1;
int rear=-1;
void in_left();
void in_right();
void del_left();
void del_right();
void display();


main()
{
	int choice;
	while(1)
	{
		printf("1:insert at right\n");
		printf("2:insert at left\n");
		printf("3:delete left\n");
		printf("4:delete right\n");
		printf("5:display\n");
		printf("6:exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				in_right();
				break;
			case 2:
				in_left();
				break;
			case 3:
				del_left();
				break;
			case 4:
				del_right();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(1);
			default:
				printf("wrong choice\n");
				break;
			}
		}
		return;
}


void in_right()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
	if((front==-1 && rear==MAX-1)||(front==rear+1))
	{
		printf("q is full\n");
		return;
	}
	
	if(front==-1)
	{
		front=0;
		rear=0;
		
		q[rear]=x;
		return;
	}
	if(rear==MAX-1)
	{
		rear=0;
		q[rear]=x;
		return;
		
	}
	else
	{
		rear=rear+1;
		q[rear]=x;
	}
}



void del_left()
{
	if(front==-1)
	{
	printf("empty\n");
	return;
    }
    if(front==0 && rear==0)
    {
    	front=-1;
    	rear=-1;
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


void in_left()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
	if((front==-1 && rear==MAX-1)||(front==rear+1))
	{
		printf("q is full\n");
		return;
	}
	if(front==-1)
	{
		front=rear=0;
		q[front]=x;
		return;
	}
	if(front==0)
	{
		front=MAX-1;
		q[front]=x;
	}
	else
	{
		front=front-1;
		q[front]=x;
	}
	
}


void del_right()
{
	if(front==-1)
	{
		printf("empty q\n");
		return;
	}
	if(rear==0 && front==0)
	{
		front=rear=-1;
		return;
	}
	if(rear==0)
	{
		rear=MAX-1;
	}
	else
	{
		rear=rear-1;
    }
	
	
}


void display()
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
			printf("%d\n",q[f]);
			f++;
		}
		return;
	}
	else
	{
		while(f<=MAX-1)
		{
			printf("%d\n",q[f]);
			f++;
		}
		f=0;
		while(f<=rear)
		{
			printf("%d\n",q[f]);
			f++;
		}
	}
}
