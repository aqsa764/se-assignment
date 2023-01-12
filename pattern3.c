#include<stdio.h>
main()
{
	int i,j,n,k;
	
	printf("ENTER NUMBER :");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(k=0;k<=n-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	
}

  

 
