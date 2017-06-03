#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *top=NULL;
void pop();
void push();
void display();
main()
{
	int choice;
	while(1)
	{
		printf("\n1:pop up\n");
		printf("2:push\n");
		printf("3:display\n");
		printf("4:quit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				pop();
				break;
			case 2:
				push();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("wrong choice\n");
		}
	}
	return 0;
}
void pop()
{
	struct node *p,*temp;
	if(top==NULL)
	{
		printf("list is empty\n");
	}
	else
	{   
		p=top;
	    top=top->next;
		free(p);
				
	}
}
void push()
{
	int x;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value");
	scanf("%d",&x);
	temp->info=x;
	if(top==NULL)
	{
		temp->next=NULL;
		top=temp;
	}
	else
	{
		
		temp->next=top;
		top=temp;
	}
}
void display()
{
	struct node *p;
	p=top;
	while(p->next!=NULL)
	{
		printf("%d\n",p->info);
		p=p->next;
	}
	printf("%d\n",p->info);
	
	
}
