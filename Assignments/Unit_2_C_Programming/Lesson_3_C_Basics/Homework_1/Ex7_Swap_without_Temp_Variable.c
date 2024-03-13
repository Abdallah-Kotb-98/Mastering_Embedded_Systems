/*
 * Ex7_Swap_Two_Numbers_(without_temp_variable).c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	float n1,n2;
	printf("Please enter value of n1 : ");
	scanf("%f",&n1);
	printf("Please enter value of n2 : ");
	scanf("%f",&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("After swapping, value of n1 = %.2f \n",n1);
	printf("After swapping, value of n2 = %.1f ",n2);
	return 0;
}
