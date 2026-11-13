//write a program which accept string from user and accept one character. return frequency of that character.
/*
    input:  "Marvellous Multi OS"
            M
    output: 2

    input:  "Marvellous Multi OS"
            W
    output: 0
*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }

        iCnt++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency is: %d\n", iRet);

    return EXIT_SUCCESS;
}
