#include<stdio.h>
#include<string.h>
main()
{
	char name[25];
	int length;
	
	
	printf("ENTER STRING : ");
	gets(name);
	
	length=strlen(name);
	
	printf("LENGTH OFTHE STRING IS : %d",length);
}
