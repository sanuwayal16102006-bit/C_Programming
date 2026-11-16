//write a program which accept string from user and count number of capital characters.
/*
    input:  "Marvellous Multi OS"
    output: 4
*/

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
