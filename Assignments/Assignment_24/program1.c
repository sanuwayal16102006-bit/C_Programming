//write a program which accepet string from user and accept one character. check whether character is prosent in string or not.
/*
    input: "Marvellous Multi OS"
            e
    output: TRUE

    input:  "Marvellous Multi OS"
            w
    output: FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return TRUE;
        }

        iCnt++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character to search: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}
