//write a program which accept string from user and accept one character. return index of last occurance of that character.
/*
    input:  "Marvellous Multi OS"
             M
    output: 11

    input:  "Marvellous Multi OS"
            W
    output:  -1

    input:  "Marvellous Multi OS"
            e
    output:  4 
*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
    }

    return iPos;
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

    iRet = LastChar(arr, cValue);

    printf("Last occurrence index is: %d\n", iRet);

    return EXIT_SUCCESS;
}
