#include<stdio.h>
main()
{
	int a=20;
	int b=30;
	
	printf("BEFORE SWAPING:  %d %d  ",a,b);
	
	swap(&a,&b);
	printf("\nAFTRE SWAPING %d %d",a,b);
		
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	

}
