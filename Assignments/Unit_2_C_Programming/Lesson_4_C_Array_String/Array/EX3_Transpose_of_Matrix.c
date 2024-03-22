/*
 * EX3_Transpose_of_Matrix.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    int r,c;

	printf("Please enter the size of Matrix:\n");
	printf("rows = "); scanf("%d",&r);
	printf("columns = "); scanf("%d",&c);
	printf("Please enter the elements of Matrix:\n");
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			 printf("Enter a%d%d: ",i+1,j+1);
			 scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			 printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			 printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
