/*
 * Ex03-Get_Largest_Number.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>


int main()
{
    float num1 , num2 , num3;
    printf("Please enter three numbers: ");
    scanf("%f %f %f", &num1 , &num2 , &num3);

    if(num1>num2 && num1>num3)
        printf("Largest number = %f ",num1);
    else if(num2>num1 && num2>num3)
        printf("Largest number = %f ",num2);
    else
        printf("Largest number = %f ",num3);



    return 0;

}
