#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100],letter;
    char *ptr;
    printf("ENTER THE STRING");
    gets(ch);
    ptr=&ch[0];
    int count1=0;
    for(int i=0;i<strlen(ch);i++)
    {
        letter=*(ptr+i);
        printf("%c \n",*ptr+i);
        if(letter==' ')
        {
            count1++;
        }
    }

    printf("THE LENGTH OF STRING WITH SPACES IS : %d \n",strlen(ch));
    printf("THE LENGTH OF STRING WITHOUT SPACES IS : %d",strlen(ch)-count1);
}