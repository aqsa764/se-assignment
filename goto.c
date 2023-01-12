#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	lable:
		i++;
		sum+=i;//sum= sum+i;
		
		if(i>n)
		goto lable;
		
		printf("SUM OF %d is = %d",n,sum);
}
