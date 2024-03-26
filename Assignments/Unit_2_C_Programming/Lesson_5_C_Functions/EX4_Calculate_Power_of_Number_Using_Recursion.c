/*
 * EX4_Calculate_Power_of_Number_Using_Recursion.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

long long pwr(int num,int power)
{
if(num>0)
{
	if(power>0)
	{
		return num*pwr(num,power-1);
	}
	else
		return 1 ;
}
else if(num<0)
{
	if(power==0)
		return 1;
	unsigned int u_num;
	u_num=~num;
	u_num=u_num+1;
	int i;
	long long result=1;
	for(i=0;i<power;i++)
	{
		result*=u_num;
	}
	if(power%2==0)
		return result;
	else
		return result*-1;
}
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num,power ;
	printf("Please enter base number : ");
	scanf("%d",&num);
	printf("Please enter the power number (positive integer) : ");
	scanf("%d",&power);
	while(power<0)
	{
		printf("error!! power must be positive integer");
		printf("Please enter the power number (positive integer) : ");
		scanf("%d",&power);
	}
	printf("%d^%d = %lld ",num,power,pwr(num,power));
	return 0 ;
}
