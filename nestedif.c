#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("ENTER VALUE OF A : ");
	scanf("%d",&a);
	
	printf("ENTER VALUE OF B : ");
	scanf("%d",&b);
	
	printf("ENTER VALUE OF C : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A IS GRATER");
		}
		else
		{
			printf("C IS GRATER");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B IS GRATER");
		}
		else
		{
			printf("C IS GRATER");
		}
	}
}
