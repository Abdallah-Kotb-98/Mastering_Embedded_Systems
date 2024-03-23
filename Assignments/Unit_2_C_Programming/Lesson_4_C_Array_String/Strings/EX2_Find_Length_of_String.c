/*
 * EX2_Find_Length_of_String.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char a[100];
	printf("Enter a string : ");
	gets(a);
	int i=0;
	do
	{
		i++;
	}
	while (a[i] !=0);

	printf("Length of string = %d\n",i);


	return 0;
}
