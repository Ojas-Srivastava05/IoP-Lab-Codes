#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int count=0;
    printf("ENTER THE STRING");
    char st[100],letter;
    gets(st);
    char *ch;
    ch=&st[0];
    printf("THE NUMBER OF WORDS IN THE STRING ARE ");
    for(int i=0;i<strlen(st);i++)
    {
        letter=*(ch+i);
        if(letter==' ')
        {
            count++;
        }
    }
    printf("\n %d",count);
}