/*
 * EX1_Sum_of_2D_Arrays.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a[2][2];
	float b[2][2];
	printf("Please enter the elements of 1st matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 printf("Enter a%d%d: ",i+1,j+1);
			 scanf("%f",&a[i][j]);
		}

	}

	printf("Please enter the elements of 2nd matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 printf("Enter b%d%d: ",i+1,j+1);
			 scanf("%f",&b[i][j]);
		}

	}
	printf("Sum of Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 printf("%f ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
