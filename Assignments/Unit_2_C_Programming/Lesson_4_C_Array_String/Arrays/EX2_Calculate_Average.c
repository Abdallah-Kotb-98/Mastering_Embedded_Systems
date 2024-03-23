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
	float a[100];
	float sum;
	printf("Please enter the number of data:");
	scanf("%d",&n);
	while(n<=0||n>100)
	{
		printf("Error!!... Please enter the number of data in the range 1-100\n");
		printf("Please enter the number of data:");
		scanf("%d",&n);
	}

	for(int i=0;i<n;i++)
	{

			 printf("Enter nmuber: ");
			 scanf("%f",&a[i]);
			 sum+=a[i];
	}
	printf("Average = %f",sum/n);
	return 0;
}
