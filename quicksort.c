#include<stdio.h>
#include<stdlib.h>
#define MAX 40
void quick(int a[],int low,int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		quick(a,low,j-1);
		quick(a,j+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int i,j,temp,key;
	key=a[low];
	i=low+1;
	j=high;
	while(i<j)
	{
		while(a[i]<=key)
		{
			i++;
		}
	
		while(a[j]>key)
			j--;
				
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
	
		
	
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
	
	quick(a,0,n-1);
	printf("sorted\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return;
}
