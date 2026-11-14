//Accept character from user. if it is capital then display all the characters from the input characters till Z. if input character is small then print all the characters in reverse order till a. int other cases retuen directly.
/*
    input:  Q
    output: Q  R  S  T  U  V  W  X  Y  Z

    input: m
    output: m  l  k  j  i  h  g  f  e  d  c  b  a

    input:  8
    output:
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int i;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
