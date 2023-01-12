#include<stdio.h>
#include<string.h>
main()
{
	char s[25],s1[25],x;
	
	printf("ENTER STRING:");
	gets(s);
	
	printf("ENTER STRING1 ");
	gets(s1);
	
	x=strcmp(s,s1);
	
	if(x!=0)
	{
		printf("STRING IS NOT EQUAL");
	}
	else
	{
		printf("STRING IS EQUAL");
	}
}
