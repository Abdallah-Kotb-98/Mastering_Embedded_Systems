/*
 * Number_Is_Negative_or_Positive.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num;
	printf("Please enter a number: ");
	scanf("%f",&num);
	if(num>0)
		printf("%f is a positive number.",num);
	else if(num<0)
		printf("%f is a negative number.",num);
	else
		printf("You entered zero.");
}
