//accept the age of a person and determin whether the person is eligible to vote. A person must be at leasr 18 years old to vote. A negative age should be considered invalid.
/*
//input: 21 -> Eligible for voting
//input: 16 -> not eligible for votinf
//input: 5 -> invalid age
*/

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return 0;
}