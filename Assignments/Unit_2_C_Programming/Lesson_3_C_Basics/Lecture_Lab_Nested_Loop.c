/*
 * Lab_Nested_Loop.c
 *
 *  Created on: Mar 11, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>

// Lab from lecture

int main()
{
	int i , j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");

	}
}
