//Strings in C

/*

	String in C refer as array of characters with null terminator
	
	>>How to declare string in C:
	
	Syntax : char string_name[size];
	
	>>String Initialization : 
	
		ex: 
		
		char str1[]={'H','e',' ','l','l','o','\0'};
		
		or
		
		char str1[]="Hello";
	
*/

#include<stdio.h>

int main()
{
	
	char name[]={'H','e','l','l','o','\0'};
	
	char name1[]="Hello";
	
	char user[20];
	
	printf("Enter name: ");
	scanf("%s",&user);
	
	
	printf("%s",name);
	printf("\n%s",name1);
	printf("\nYour Name = %s",user);
	
	return 0;
}
















