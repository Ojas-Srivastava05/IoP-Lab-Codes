#include<stdio.h>
#include<conio.h>
#include<string.h>
int palindrome(char str);
void main()
{
    printf("enter the string \n");
    char str[100];
    gets(str);
    int result;
    result=palindrome(str[]);
    if(result==1)
    {
        printf("palindrome");
    }
    if(result==0)
    {
        printf("not palindrome");
    }
}
int palindrome(char str)
{
    char ch;
    int flag=0;
    int i=0;
    if(flag!=1)
    {
        ch=str[i];
        if(ch==str[strlen(str)-i-1])
        {
            i++;
            palindrome(str);
        }
        else
        {
            return 0;
        }
    }
    return 1;
}