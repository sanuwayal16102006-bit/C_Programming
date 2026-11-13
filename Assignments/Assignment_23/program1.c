//write a program which accept string from user and convert it into lower case.
/*
  input:  "Marvellous Multi OS"

  output:  marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void strlwrx(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        str[iCnt] = tolower(str[iCnt]);
        iCnt++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified string is %s\n" ,arr);

    return EXIT_SUCCESS;
}