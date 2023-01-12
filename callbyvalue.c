#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	
	printf("BEFORE SWAPING %d %d : ",a,b);
	
	swap(a,b);
}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAFTRE SWAPING %d %d",a,b);
}
