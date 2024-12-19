#include<stdio.h>
#include<conio.h>
#include<string.H>
void main()
{
    char st[100],rev[100],letter;
    printf("ENTER THE STRING");
    gets(st);
    char *ptr;
    ptr=&st[0];
    for(int i=0;i<strlen(st);i++)
    {
        letter=*(ptr+i);
        rev[strlen(st)-i-1]=letter;
    }
    printf("THE STRING AFTER REVERSING IS \n");
    for(int i=0;i<strlen(st);i++)
    {
        printf("%c",rev[i]);
    }
}