/*
 * EX2_Calculate_Factorial_Using_Recursion.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Abdallah
 */



#include <stdio.h>

long long find_fact(int n)
{
	while(n>1)
		return n*find_fact(n-1);
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n ;
	long long fact;
	printf("Please enter an positive integer : ");
	scanf("%d",&n);
	fact=find_fact(n);
	printf("Factorial of %d = %lld",n,fact);
	return 0 ;
}
