/*
 * EX3.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

	struct Sr_i
	{
		float m_R;
		float m_I;
	};
	struct Sr_i add(struct Sr_i n1,struct Sr_i n2)
	{
		struct Sr_i sum;

		sum.m_R = n1.m_R + n2.m_R;
		sum.m_I = n1.m_I + n2.m_I;
		return sum;
	}
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct Sr_i n1,n2,sum;

	printf("Enter 1st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f",&n1.m_R); scanf("%f",&n1.m_I);
	printf("Enter 2nd complex number:\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f",&n2.m_R); scanf("%f",&n2.m_I);
	sum=add(n1,n2);
	printf("Sum of the two complex numbers = %.1f+%.1fi \n",sum.m_R,sum.m_I);
	return 0;
}





