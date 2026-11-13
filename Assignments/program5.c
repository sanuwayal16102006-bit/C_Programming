//Write a program which accept string from user and convert it into upper case.
/*
  input:  "marvellouS"

  output:  0

  input:  "MarvellouS Infosystems"

  output: 1

  input:  "Marvellous Infosystem by Piyush Manohar Khairnar"

  output: 5
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }

        iCnt++;
    }

    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return EXIT_SUCCESS;
}
