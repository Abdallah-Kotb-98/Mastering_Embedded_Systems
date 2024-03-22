/*
 * EX1_Count_Chars_in_String.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char str[100];
	char c;
	char count=0;
	printf("Please enter a string : ");
	gets(str);
	printf("Please enter a char you want to count : ");
	scanf("%c",&c);
	for(int i=0;str[i]!=0;i++)
	{
		if(str[i]==c)
			count++;
	}
	printf("Frequency of char '%c' = %d ",c,count);

	return 0;
}
