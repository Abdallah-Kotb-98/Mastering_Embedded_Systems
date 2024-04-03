/*
 * EX2.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

	struct Sf_i
	{
		int m_feet;
		float m_inch;
	};
	struct Sf_i add(struct Sf_i d1,struct Sf_i d2)
	{
		struct Sf_i sum;
		int rem=0;
		float temp=1;
		sum.m_inch = d1.m_inch + d2.m_inch;
		if(sum.m_inch>12)
		{
			while((int)temp!=0)
			{
			 temp=sum.m_inch-12;
			 rem++;
			}
			sum.m_inch=temp;
		}

		sum.m_feet = d1.m_feet + d2.m_feet+rem;
		return sum;
	}
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct Sf_i d1,d2,sum;

	printf("Enter information for 1st distance:\n");
	printf("Enter feets: "); scanf("%d",&d1.m_feet);
	printf("Enter inchs: "); scanf("%f",&d1.m_inch);
	printf("Enter information for 2nd distance:\n");
	printf("Enter feets: "); scanf("%d",&d2.m_feet);
	printf("Enter inchs: "); scanf("%f",&d2.m_inch);
	sum=add(d1,d2);
	printf("Sum of distances = %d'-%.1f\" \n",sum.m_feet,sum.m_inch);
	return 0;
}





