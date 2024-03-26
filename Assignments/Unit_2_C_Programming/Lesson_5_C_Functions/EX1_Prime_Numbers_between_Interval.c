/*
 * EX1_Prime_Numbers_between_Interval.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Abdallah
 */



#include <stdio.h>

void Print_Prime_Numebrs(int n1,int n2)
{
	char c=0;
	printf("Prime numbers between %d and %d are :",n1,n2);
	for(;n1<=n2;n1++)
	{
		int j;
		for(j=2;j<n1;j++)
		{
			if(n1%j==0)
			{
				c++;
				break;
			}
		}
		if(c==0)
			printf(" %d",n1);
		c=0;
	}
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n1,n2;
	printf("Please enter two numbers (the interval) : ");
	scanf("%d %d",&n1,&n2);
	Print_Prime_Numebrs(n1,n2);
	return 0 ;
}
