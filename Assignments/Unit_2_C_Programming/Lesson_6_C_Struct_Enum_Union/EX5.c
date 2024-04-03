/*
 * EX5.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#define area_of_Circle(r) 22/7*r*r
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float radius,area;
	printf("Enter the radius: "); scanf("%f",&radius);
	area=area_of_Circle(radius);
	printf("Area = %.2f",area);

	return 0;
}
