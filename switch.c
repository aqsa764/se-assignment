#include<stdio.h>
main()
{
	int week;
	printf("ENTER A NUMBER : ");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
		printf("SUNDAY");
		break;
		
		case 2:
			printf("MONDAY");
			break;
			
			case 3:
				printf("TUESDAY");
				break;
				
				case 4:
					printf("WEDNESDAY");
					break;
					
					default:
						printf("SOMETHING IS WRONG");
	}
	
	
}
