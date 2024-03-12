/*
 * Ex01_Even_or_Odd.c
 *
 *  Created on: Mar 11, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>

//

int main()
{
    int num;
    printf("Please enter an integr you want to check: ");
    scanf("%d",&num);
    fflush(stdin);
    if(num%2==0)
        printf("%d is even",num);
    else
        printf("%d is odd",num);

    return 0;

}
