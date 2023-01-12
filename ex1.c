#include<stdio.h>
main()
{
	int id;
	int mobile;
	char name[20];
	
	printf("ENTER ID : ");
	scanf("%d",&id);
	
	fflush(stdin);
	
	printf("ENTER NAME :");
	scanf("%c",&name);
	
	fflush(stdin);
	
	printf("ENTER MOBILE NUMBER : ");
	scanf("%s",&mobile);
	
	printf("\nID : %d", id);
	printf("\nNAME : %c",name);
	printf("\nMOBILE NUMBER : %d ",mobile);
}
