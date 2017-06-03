 #include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void popup();
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
				popup();
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
void popup()
{
	if(top==-1)
	{
		printf("stack is empty\n");
		
	}
	else
	{
		top=top-1;
	}
}
void push()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
		
	top=top+1;
	
	stack[top]=x;
	
}
void display()
{
	int x;
	x=top;
	do
	{
		printf("%d\n",stack[x]);
		x=x-1;
	}while(x!=-1);
    
}
