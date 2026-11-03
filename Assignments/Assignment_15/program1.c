//write a program which accept name from user and print that name.
/*
  input: Saniya Wayal
  output: Saniya Wayal
*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter your name\n");
    scanf("%[^\n]", Name);

    printf("your name is %s", Name);

    return 0;
}
