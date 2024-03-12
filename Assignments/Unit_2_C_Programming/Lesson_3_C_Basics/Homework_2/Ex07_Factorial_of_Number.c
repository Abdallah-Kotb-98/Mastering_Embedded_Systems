/*
 * Ex07_Factorial_of_Number.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,fact=1;
	printf("Please enter an integer : ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Factorial of '%d' = %d",num,fact);
	}
	else if(num<0)
		printf("Error!!! Factorial of negative number doesn't exist");
	else
	{
		int i;
		for(i=2;i<=num;i++)
		{
			fact*=i;
		}
		printf("Factorial of '%d' = %d",num,fact);
	}



}
