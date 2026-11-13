//Write a program which accept string from user and convert it into upper case.
/*
  input:  "marve89llous121"

  output:  89121

  input:  "Demo"

  output: 
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c", str[iCnt]);
        }

        iCnt++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Digits are: ");
    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
