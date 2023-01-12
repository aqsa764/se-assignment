#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	printf("ENTER ELEMENTS : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);//2,4,8,6,7
	}
	for(i=0;i<5;i++)// a[i]=0
	{
		for(j=i+1;j<5;j++)//a[j]=1
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
			
		}
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
}
