//string : 

/*

	In built functions in String : 
	
	strlen() : to find length of string  : this function will return int value
	strrev() : to reverse a string 
	strlwr() : to convert string to lower case characters 
	strupr() : to convert string to upper case characters 
	strchr() : to find first occurance of character in string

*/ 

//WAP to to find string length with using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[100];
	int length=0;
	
	printf("Enter string : ");
	gets(str);
	 //here strlen() : it is inbuilt function in c to find length 
	length=strlen(str);
	
	printf("Length of string : %d",length);
	
	return 0;
}





