/*
 * Ex08_Simple_Calculator.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>

int main()
{
	char operator;
	float op1,op2,result;
	printf("Please Enter the operator either '+' or '-' or '*' or '/ : ");
	scanf("%c",&operator);
	printf("Please Enter the the two operands : ");
	scanf("%f %f",&op1,&op2);
	switch (operator)
	{
	case '+' : result = op1 + op2;
				break;
	case '-' : result = op1 - op2;
				break;
	case '*' : result = op1 * op2;
				break;
	case '/' : result = op1 / op2;
				break;
	}
	printf("%f %c %f = %f",op1,operator,op2,result);
	return 0;
}
