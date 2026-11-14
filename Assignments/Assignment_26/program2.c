//Accept character from usre. if character is small display its corresponding capital character, and if it small then dispay its corresponding capital. in order cases display as it is.
/*
    input: Q
    output:  q

    input:  m
    output:  M

    input: 4
    output:  4
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output: %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
