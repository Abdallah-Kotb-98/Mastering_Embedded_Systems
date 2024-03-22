/*
 * EX5_Search_Element_in_Array.c
 *
 *  Created on: Mar 21, 2024
 *      Author: Abdallah
 */



#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n=0;
	int e=0;
	char c=0;
	printf("Please enter no. of elements : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdout);
	printf("Please enter the element to be searched : ");
	scanf("%d",&e);
	for(int i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			printf("Number '%d' found at the location = %d",e,i+1);
			c++;
		}
	}
	if(c==0)
		printf("Number '%d' is not found",e);



	return 0;
}
