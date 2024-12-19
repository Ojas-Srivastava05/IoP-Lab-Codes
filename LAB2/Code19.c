#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    int flag=ch>='a' && ch<='z'? 1:2;
    if(flag==1)
    {
        printf("small case");
    }
    else{
        printf("not small case");
    }
}