/*
 * Ex02_Vowel_or_Consonant.c
 *
 *  Created on: Mar 12, 2024
 *      Author: Abdallah
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Please enter an alphabet: ");
    scanf("%c",&c);

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
		  printf("%c is a vowel.\n", c);
	  else
		  printf("%c is a consonant.\n", c);

    return 0;

}
