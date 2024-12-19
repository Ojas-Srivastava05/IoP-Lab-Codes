#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char st[100];
    printf("ENTER THE STRING");
    gets(st);
    char *ptr;
    int vcount=0;
    ptr=&st[0];
    for(int i=0;i<strlen(st);i++)
    {
        switch(*(ptr+i))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                        vcount++;

        }
    }
    printf("THE NUMBER OF VOWELS ARE %d ",vcount);
}