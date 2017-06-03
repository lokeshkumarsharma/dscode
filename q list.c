#include<stdio.h>
#include<stdlib.h>
void del();
void add();
void display();
struct node
{
	int info;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
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
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter value");
	scanf("%d",&p->info);
	if(front==NULL)
	{
	
		p->next=NULL;
		front=p;
		rear=front;
	}
	else if(front==rear)
	{
		front->next=p;
		rear=p;
	}
	else
	{
		rear->next=p;
		p->next=NULL;
		rear=p;
	}
}
void del()
{
	if(front==NULL)
	{
		printf("empty queue\n");
	}
	else
	{
		front=front->next;
	}
}
void display()
{
	struct node *p;
	p=front;
	while(p->next!=NULL)
	{
		printf("%d\n",p->info);
		p=p->next;
	}
	printf("%d\n",p->info);
}
