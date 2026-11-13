//Write a program which accept string from user and convert it into upper case.
/*
  input:  "Marvellous Multi OS"

  output:  MARVELLOUS MULTI OS
*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

void struprx(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        str[iCnt] = toupper(str[iCnt]);
        iCnt++;
    }

}

int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^\n]s" ,arr);

    struprx(arr);

    printf("Modified string is %s" ,arr);

    return EXIT_SUCCESS;
}