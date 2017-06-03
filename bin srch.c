#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
	struct tree *left,*right;
	int data;
}node;

node *insert(node*,int);
node *search(node*,int);
void maxs(node*);
void mins(node*);

main()
{
	node *p,*root=NULL;
	int choice,d,x;
	while(1)
	{
		printf("1:insertion\n");
		printf("2:searching\n");
		printf("3:maximum\n");
		printf("4:minimum\n");
		printf("5:exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value");
				scanf("%d",&d);
				
				root=insert(root,d);
				break;
			case 2:
				printf("enter searching value\n");
				scanf("%d",&x);
				search(root,x);
				break;
			case 3:
				maxs(root);
				
				break;
			case 4:
				mins(root);
				
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


node* insert(node* root,int d)
{
	
	
	if(root==NULL)
	{
		root=(node*)malloc(sizeof(node));
		root->data=d;
		root->left=NULL;
		root->right=NULL;
		return root;
		
	}
	else if(root->data>d)
	{
		root->left=insert(root->left,d);
	}
	else
	{
		root->right=insert(root->right,d);
	}
	return (root);
				
	
}

void maxs(node *r)
{
	while(r->right!=NULL)
	{
		r=r->right;
	}
	printf("%d\n",r->data);
}

void mins(node *r)
{
	
	while(r->left!=NULL)
	{
		r=r->left;
	}
	printf("%d\n",r->data);

}

node* search(node *r,int d)
{
	if(r->left==NULL && r->right==NULL && r->data!=d)
	{
		printf("not found\n");
		return;
	}
	if(r->data==d)
	{
		return r;
	}
	else if(r->data<d)
	{
		r=search(r->right,d);
	}
	else
	{
		r=search(r->left,d);
	}
	return r;


}
