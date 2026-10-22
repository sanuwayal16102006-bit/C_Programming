//Accept a single character and determine whether it is an upperspace alphabet, lowercase alphaber, digit, or special characer. use character comparisons without using library character=classification function
/*
//input: A -> uppercase alphabet
//input: m -> lowercase alphabet 
//input: 7 -> digit
//input: @ -> special character
*/

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return 0;
}