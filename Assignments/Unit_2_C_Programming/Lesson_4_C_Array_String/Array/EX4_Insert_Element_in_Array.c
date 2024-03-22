	/*
 * EX4_Insert_Element_in_Array.c
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
	int l=0;
	char c=0;
	printf("Please enter no. of elements : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
		printf("%d ",a[i]);
	}
	printf("\nPlease enter the element to be inserted : ");
	scanf("%d",&e);
	printf("Please enter the location of insertion : ");
	scanf("%d",&l);
	int b[n+1];
	for(int i=0;i<n+1;i++)
	{

		if(i!=l-1)
		{
			if(c==0)
			{
				b[i]=a[i];
				printf("%d ",b[i]);
			}
			else
			{
				b[i]=a[i-1];
				printf("%d ",b[i]);
			}
		}
		if(i==l-1&&c==0)
		{
			b[i]=e;
			printf("%d ",b[i]);
			c++;
		}
	}

	return 0;
}
