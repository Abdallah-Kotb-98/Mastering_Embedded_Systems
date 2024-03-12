/*
 * Ex06_Sum_of_Natural_Numbers.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,sum=0;
	printf("Please enter an integer : ");
	scanf("%d",&num);
	int i;
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);

}

