#include<stdio.h> 
void main()
{
	int a[7],i,j,count,sum=0,sum1=0;
	printf("ENTER ELEMENS");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<4;i++)
	{
		j=i;
		count=0;
	     while(count<3)
		{
		//for()
			
			if(i==0)
			{
		//		for(j=i;j<i+3;j++)
		//		{
				
				//i=i+1;
				
				sum=sum+a[j];
				//count++;
				//j++;
			    }
			}
			else
			{
				for(j=i;j<i+3;j++)
               {
               
				//i=i+1;
				sum1=sum1+a[j];
				//count++;
				//j++;
			   }
			}
		//}
			if(sum1>sum)
			{
				sum=sum1;
				sum1=0;
			}
		
	}
	printf("%d\n",sum);
}
	
	
