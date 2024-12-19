#include<stdio.h>
void main()
{
    char ch='A';
    int val=ch,count=1;
    
    for(int i=1;i<=5;i++)
    {
        while(count<=i)
        {
            printf("%c",ch);
            count=count+1;
            ch=ch+1;
        }
        ch='A';
        count=1;
        printf("\n");   
    }
}