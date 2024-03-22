/*
 * Ex2_Calculate_Average.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;
	float sum;
	printf("Please enter the number of data:");
	scanf("%d",&n);

	float a[n];
	for(int i=0;i<n;i++)
	{

			 printf("Enter nmuber: ");
			 scanf("%f",&a[i]);
	}

	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Average = %f",sum/n);
	return 0;
}
