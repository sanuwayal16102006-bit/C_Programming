//WRITE A PROGRAM WHICH ACCEPT STRING FROM USER AND DISPLAY IT INN REVERSE ORDER.
/*
    INPUT: "MarvellouS"
    output: "SuollevraM"
*/
#include <stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *end = str;

    if (str == NULL)
    {
        return;
    }

    while (*end != '\0')
    {
        end++;
    }
    end--; 
    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}