//write a program which accept string from user and check whether it contaiins vowels in it or not.
/*
    input: "marvellous"
    output: TRUE

    input: "Demo"
    output:  TRUE

    input: "xyz"
    output: FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a' && *str <= 'z') ||
           (*str >= 'A' && *str <= 'Z'))
        {
            if(*str == 'a' || *str == 'e' ||
               *str == 'i' || *str == 'o' ||
               *str == 'u' || *str == 'A' ||
               *str == 'E' || *str == 'I' ||
               *str == 'O' || *str == 'U')
            {
                return TRUE;
            }
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("there no Vowels");
    }

    return 0;
}
