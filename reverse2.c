#include<stdio.h>
main()
{
	int n,reverse=0,rem;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;//12345
		reverse=reverse*10+rem;//0=0*10+5
		n/=10;
	}
	printf("REVERSE NUMBER : %d", reverse);
}
