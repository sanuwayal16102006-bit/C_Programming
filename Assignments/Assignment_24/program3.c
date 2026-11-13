//accept a program which accept string from user and accept one character. return index of first occurrence of that character.
/*
    input:  "Marvellous Multi OS"
             M
    output:  0

    input:  "Marvellous Multi OS"
            W
    output:  -1

    input:  "Marvellous Multi OS"
            e
    output:  4 
*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }

        iCnt++;
    }

    return -1;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Index is: %d\n", iRet);

    return EXIT_SUCCESS;
}
