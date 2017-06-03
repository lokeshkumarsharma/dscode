#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev,*next;
	int info;
};
struct node *list=NULL;
void insbeg();
void insend();
//void insgive();
void delbeg();
void delend();
void delgive();
void display();


main()
{
	int choice;
	
		
	while(1)
	{
		printf("1:ins beg\n");
		printf("2:ins end\n");
		printf("3:ins give\n");
		printf("4:del beg\n");
		printf("5:del end\n");
		printf("6:del give\n");
		printf("7:exit\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		
	
	switch(choice)
	{
		case 1:
			insbeg();
			break;
		case 2:
			insend();
			break;
		//case 3:
		//	insgive();
		//	break;
		case 4:
			delbeg();
			break;
		case 5:
			delend();
			break;
		case 6:
			delgive();
			break;
		case 7:
			exit(0);
			
		default:
			printf("wrong choice\n");
			break;
		
	}
	
}
	return 0;
}

void insbeg()
{
	
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter no.");
	scanf("%d",&p->info);
	if(list==NULL)
	{
		
		p->prev=NULL;
		p->next=NULL;
		list=p;
	}
	else
	    {
	    	p->prev=NULL;
	    	p->next=list;
	    	list->prev=p;
	    	p=list;
	    	
	    }
	    display();
}
void insend()
{
	struct node *p,*temp;
	int x;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter no.");
	scanf("%d",&x);
	p->info=x;
	if(list==NULL)
	{
		list=p;
		list->prev=NULL;
		list->next=NULL;
	}
	else
	{
		temp=list;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
		p->prev=temp;
		p->next=NULL;
	}
	display();
}
void delend()
{
	struct node *temp,*p;
	if(list==NULL)
	{
		printf("invalid\n");
		
	}
	else
	{
		temp=list;
		p=list;
		while(temp->next!=NULL)
		{
			p=temp;
			temp=temp->next;
		}
		p->next=NULL;
		
	}
	display();
}

void delbeg()
{
	struct node *temp,*p;
	if(list==NULL)
	{
		printf("invalid\n");
		
	}
	else if(list->next==NULL)
	{
		list=NULL;
	}
	else
	{
		list=list->next;
		list->prev=NULL;
		
	}
	display();

}
void display()
{
	struct node *temp;
	
	if(list->next==NULL)
	{
		printf("%d\n",list->info);
	}
	
	else
	{
	
		temp=list;
		while(temp->next!=NULL)
		{
			printf("%d\n",temp->info);
			temp=temp->next;
		}
		printf("%d\n",temp->info);
    }
}
void delgive()
{
	struct node *temp,*p;
	int x,i;
	printf("enter position");
	scanf("%d",&x);
	if(list==NULL)
	{
		printf("list is empty\n");
		
	}

	else
	{
		temp=list;
		for(i=1;i<x-1;i++)
		{
			temp=temp->next;
		}
		
		temp->next=temp->next->next;
		temp->next->next->prev=temp;
		
	}
     display();	
	
}
