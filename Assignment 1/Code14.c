#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character ");
    scanf("%c",&ch);
    int i=ch;
    if(i<=90 && i>=65)
    {
        printf("UPPERCASE");
    }
    if(i>=97 && i<=122)
    {
        printf("LOWERCASE");
    }
    if(i>=48 && i<=57)
    {
        printf("DIGIT");
    }
    if(i>=33 && i<=47 || i<=126 && i>=123)
    {
        printf("SPECIAL SYMBOL");
    }
}