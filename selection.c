#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void selection(int x[],int n)
{
	int i,j,min,pos,temp;
	for(i=0;i<=n-1;i++)
	{
		min=x[i];
		pos=i;
		for(j=i+1;j<=n-1;j++)
		{
			
			if(x[j]<min)
			{
				min=x[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=x[i];
			x[i]=x[pos];
			x[pos]=temp;
		}
	
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}

}

main()
{
	int i,n,x[MAX];
	printf("enter no.of values\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	selection(x,n);
		return;
	
}
