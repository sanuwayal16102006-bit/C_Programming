//Accept character from user and display its ASCII value in decimal, octal, and hexadecimal format.
/*
    input:  A
    output:  Decimal  65
             octal    0101
             Hexadecimal  0X41
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("\nDecimal      : %d", ch);
    printf("\nOctal        : %04o", ch);
    printf("\nHexadecimal  : 0X%X", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
