#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};
struct node *list=NULL;
void ins_beg();
void ins_end();
void insgive();
void del_beg();
void del_end();
void delgive();
void display();
void mid(int);
int c=0;

main()
{
	int choice,c=0;
	
	
	while(1)
	{
		printf("1:ins beg\n");
		printf("2:ins end\n");
		printf("3:ins give\n");
		printf("4:del beg\n");
		printf("5:del end\n");
		printf("6:del give\n");
		printf("7:exit\n");
		printf("8:split\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		
	
	switch(choice)
	{
		case 1:
			ins_beg();
			c++;
			break;
		case 2:
			ins_end();
			c++;
			break;
		case 3:
			insgive();
			c++;
			break;
		case 4:
			del_beg();
			c--;
			break;
		case 5:
			del_end();
			c--;
			break;
		case 6:
			delgive();
			c--;
			break;
		case 7:
			exit(1);
			break;
		case 8:
			mid(c);
			break;
		
	}
}

return 0;
}
void ins_beg()
{
	int x;
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter no.\n");
	scanf("%d",&x);
	p->info=x;
	if(list==NULL)
	{
		list=p;
		list->next=NULL;
	}
	else
	{
		p->next=list;
	   list=p;
	  
	}
	 display();
	

	
}
void ins_end()
{
	struct node *temp,*p;
	p=(struct node*)malloc(sizeof(struct node*));
	printf("enter no.\n");
	scanf("%d",&p->info);
	if(list==NULL)
	{
		p=list;
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
		p->next=NULL;
		
	}
	display();


	
}
void del_beg()
{
	struct node *temp,*p;
	if(list==NULL)
	{
		printf("invalid\n");
		
	}
	else
	{
		temp=list;
		temp=temp->next;
		list=temp;
		
	}
	display();


}
void del_end()
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
void display()
{
	struct node *temp;
	temp=list;
	if(temp->next==NULL)
	{
		printf("%d\n",temp->info);
	}
	
	else{
	
	while(temp->next!=NULL)
	{
		printf("%d\n",temp->info);
		temp=temp->next;
	}
	printf("%d\n",temp->info);


}
void delgive()
{
	struct node *p,*temp;
	int x,i;
	printf("enter position\n");
	scanf("%d",&x);
	temp=list;
	if(list==NULL)
	{
		printf("list is empty\n");
		
	}
	else
	{
		for(i=1;i<x;i++)
		{
			p=temp;
			temp=temp->next;
		}
		p->next=temp->next;
		
	}
	display();
}
void insgive()
{
	struct node *temp,*p;
	int x,i;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter no.");
	scanf("%d",&p->info);
	printf("enter position\n");
	scanf("%d",&x);
	
	
	if(list==NULL)
	{
		list=p;
		list->next=NULL;
		
	}
	else
	{
		temp=list;
		for(i=1;i<x-1;i++)
		{
			
			temp=temp->next;
		}
		p->next=temp->next;
		temp->next=p;
		display();
	
}
}

void mid(int k)
{
	int m,a=1;
	m=k/2.0;
	struct node *t,*temp,*p;
	t=list;
	p=list;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	
	while(a!=m)
	{
		t=t->next;
		a++;
	}
	p->next=list;
	list=t->next;
	t->next=NULL;
	
	
display();
