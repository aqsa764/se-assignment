#include<stdio.h>
main()
{
	char string[20]="TOPS TECHNOLOGY";
	char string1[20]="";
	
	printf("BEFORE COPING.....\n");
	printf("ACTUAL STRING: %s\n",string);
	printf("COPING STRING: %s\n\n",string1);
	
	strcpy(string1,string);
	
	printf("AFTER COPING.....\n");
	printf("ACTUAL STRING: %s\n",string);
	printf("COPING STRING: %s\n\n",string1);
	
}
