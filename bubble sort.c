#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void bubble(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}

main()
{
	int x[MAX],i,n;
	printf("enter no.of values\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	bubble(x,n);
	printf("sorted output\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	return;
}
