//accept themarks of a student out of 100 and display the grade accoding to the follwing criterie. marls outside 0-100 are invalid
#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if(fMarks >= 75)
    {
        printf("Grade B\n");
    }
    else if(fMarks >= 60)
    {
        printf("Grade C\n");
    }
    else if(fMarks >= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return 0;
}