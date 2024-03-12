/*
 * Ex05_Char_Is_Alphabet_or_Not.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("Please enter a character: ");
	scanf("%c",&c);
	if((65<=c && c<=90)||(97<=c && c<=122))
		printf("%c is an alphabet.",c);
	else
		printf("%c is not an alphabet.",c);
}

