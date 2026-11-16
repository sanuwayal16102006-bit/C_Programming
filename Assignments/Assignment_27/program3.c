//write a program which accept string from user and return diffference between frequency od small characters and frequency of capital characters.
/*
    input:  "MarvellouS"
    output:  6 (8-2)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return iSmall - iCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
