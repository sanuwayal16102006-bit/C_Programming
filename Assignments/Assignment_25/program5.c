//Accept division of student from user and depends on the division display exam timing. there are 4 divisions in school as A,B,C,D. exam of division A at 7Am, B at 8.30AM, C at 9.20 AM and D at 10.30 AM.
/*
    input:  C
    output: your exam at 9.20 AM

    input:  d
    output: your exam at 10.30 AM
*/

#include<stdlib.h>
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7.00 AM");
            break;

        case 'B':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
            printf("Your exam at 10.30 AM");
            break;

        default:
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
