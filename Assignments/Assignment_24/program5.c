//write a program which accept string from user reverse that string in place.
/*
    input:  "abcd" 
    output: "dcba"

    input:  "abba"
    output: "abba"
*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char cTemp;

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        cTemp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = cTemp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is: %s\n", arr);

    return EXIT_SUCCESS;
}
