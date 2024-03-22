/*
 * EX3_Reverse_String.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <string.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char str[100];
	printf("Enter a string : ");
	gets(str);
	char *start=str;
	char *end= str+(strlen(str)-1);
	char temp;
	for(int i=0;i<strlen(str)/2;i++)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		++start;--end;
	}
	printf("Reversed string is : %s",str);


	return 0;
}

