#include<stdio.h>
void add(); // function declaration
main()
{
	add();//Function calling
}

void add()// Function defination
{
	int num1,num2,ans;
	
	printf("ENTER NUM1:");
	scanf("%d",&num1);
	
	printf("ENTER NUM2");
	scanf("%d",&num2);
	
	ans=num1+num2;
	
	printf(" ANS = %d",ans);
	
}
