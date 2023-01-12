#include<stdio.h>
#include<string.h>
main()
{
	char s[15]={'h','e','l'};
	char s1[15]={'l','o'};
	
	strcat(s,s1);
	
	printf("VALUE OF 1ST STRING : %s",s);
}
