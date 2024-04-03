/*
 * EX4.c
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
	struct Sstudent Data[10];
	printf("Enter information of students: \n");
	int i;
	// read data of students
	for(i=0;i<10;i++)
	{
		printf("For roll number %d\n",i+1);
		printf("Enter Name: "); scanf("%s",&Data[i].m_name);
		printf("Enter Marks: "); scanf("%f",&Data[i].m_marks);

	}
	// Displaying data of students
	printf("Displaying information of students: \n");
	for(i=0;i<10;i++)
	{
		printf("Information for roll number %d:\n",i+1);
		printf("Name: %s\n",Data[i].m_name);
		printf("Marks: %f\n",Data[i].m_marks);
	}

	return 0;
}






