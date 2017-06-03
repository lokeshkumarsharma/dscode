#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
	struct tree *left,*right;
	int data;
}node;

node* insert(node*,int);
void preorder(node*);
void inorder(node*);
void postorder(node*);

main()
{
	int choice,d;
	node *root=NULL;
	while(1)
	{
		printf("1:insertion\n");
		printf("2:preorder\n");
		printf("3:inorder\n");
		printf("4:postorder\n");
		printf("5:exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
				case 1:
					printf("enter value\n");
					scanf("%d",&d);
					root=insert(root,d);
			    	break;
				case 2:
					preorder(root);
					break;
				case 3:
				    inorder(root);
					break;
				case 4:
					postorder(root);
					break;
				case 5:
				
					exit(1);
				default:
					printf("wrong choice\n");
					break;				
		}
	}
	return;
}



node *insert(node *r,int a)
{
	
	if(r==NULL)
	{
		node *p;
	
		p=(node*)malloc(sizeof(node));
		p->data=a;
		p->left=NULL;
		p->right=NULL;
		return p;
		
			
    }
	if(r->data>a)
	{
		r->left=insert(r->left,a);

	}
	else
	{
		r->right=insert(r->right,a);
		
	}
	return r;
	
	
}


void preorder(node*r)
{
	
	if(r==NULL)
	{
		return;
    }
		printf("%d  ",r->data);
		preorder(r->left);
		preorder(r->right);
	
}


void inorder(node*r)
{
	if(r!=NULL)
	{
		
		inorder(r->left);
		printf("%d  ",r->data);
		inorder(r->right);
	}
}


void postorder(node*r)
{
	if(r!=NULL)
	{
		
		preorder(r->left);
		preorder(r->right);
		printf("%d  ",r->data);
	}
}

