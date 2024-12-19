#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    printf("ENTER A STRING ");
    char str[100];
    gets(str);
    char *ptr;
    ptr=&str[0];
    char strr[100];
    for(int i=0;i<strlen(str);i++)
    {
        strr[i]=*(str+strlen(str)-i-1);
    }
    printf("%s",strr);
}