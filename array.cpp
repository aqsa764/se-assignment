//Array : 

/*

Types of array : 

1) one Dimentional: ex: a[size]
2) two dimentional: ex: a[row][col]

	Syntax : 
	
		data_type array_name[rowsize][colsize];
		
		ex: a[2][2];

3) Multi Dimentional: ex: a[i][j][k][l]..

*/

#include<stdio.h>

int main()
{
	//take input in two dimwtional array from user 
	int a[2][2];
	int i,j;
	
	//outer for loop used for rows
	for(i=0;i<2;i++)
	{
		//inner for loop used for columns 
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element a[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
	
	return 0;
}







