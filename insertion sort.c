#include<stdio.h>
#include<stdlib.h>
#define MAX 40
void insert(int a[],int n)
{
	int i,j,temp,k;
	for(k=0;k<=n-1;k++)
	{
		temp=a[k];
		j=k-1;
		while((temp<a[j]) && (j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}

main()
{
	int i,a[MAX],n;
	printf("enter no. of values\n");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,n);
	printf("sorted\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return;
}
