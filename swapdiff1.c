#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n;
	int i,j,a[n],temp;
	//n=5;
	printf("enter number");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}


for(i=n-1;i>=0;i--)
{
	j=i-1;
	if(a[i]<a[j] && a[j]-a[i]==1)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

for(i=0;i<n;i++)
	{
        printf("%d\n",a[i]);
	}


for(i=0;i<n;i++)
{
	j=i+1;
	if(a[j]<a[i])
	{
		printf("no");
		break;
	}
	if(i==n-2)
	{
		printf("yes");
		break;
	}
}
}
