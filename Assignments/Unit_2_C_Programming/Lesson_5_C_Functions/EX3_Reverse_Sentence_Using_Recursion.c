/*
 * EX3_Reverse_Sentence_Using_Recursion.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Abdallah
 */



#include <stdio.h>

void Reverse(char *str,int start,int end)
{

	if(start>=end)
		return;
	char temp;
	temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	start++;end--;
	Reverse(str,start,end);
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char str[100] ;
	printf("Please enter a sentence : ");
	//gets(str);
	fgets(str,100,stdin);
	str[strlen(str)-1]='\0'; // replace '\n entered with null'
	Reverse(str,0,strlen(str)-1);
	printf("%s\n",str);
	return 0 ;
}
