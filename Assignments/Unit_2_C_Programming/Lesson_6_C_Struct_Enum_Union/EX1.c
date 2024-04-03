/*
 * EX1.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

	struct Sstudent
	{
		char m_name[100];
		int m_roll_num;
		float m_marks;
	};
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct Sstudent s;
	printf("Enter information of students \n");
	printf("Enter Name: "); scanf("%s",&s.m_name);
	printf("Enter Roll Number: "); scanf("%d",&s.m_roll_num);
	//printf("Enter Marks: "); scanf("%f",&s.m_marks);
	printf("Displaying information of student \n");
	printf("Name: %s \n",s.m_name);
	printf("Roll: %d \n",s.m_roll_num);
//	printf("Marks: %.2f \n",s.m_marks);


	return 0;
}
