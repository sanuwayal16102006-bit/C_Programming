//Write a program which accept string from user and convert it into upper case.
/*
  input:  "Marvellous Multi OS"

  output:  mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void strtogglex(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        else if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            str[iCnt] = str[iCnt] - 32;
        }

        iCnt++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is: %s\n", arr);

    return EXIT_SUCCESS;
}

