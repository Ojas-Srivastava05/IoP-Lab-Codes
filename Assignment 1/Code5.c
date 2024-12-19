#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int count=0,count1=0;
    printf("ENTER A STRING ");
    char ch[100],ch1[100];
    gets(ch);
    for(int i=0;i<strlen(ch);i++)
    {
        count++;
    }
    for(int i=0;i<strlen(ch);i++)
    {
       ch1[count-i]=ch[i];
    }
    for(int i=0;i<strlen(ch);i++)
    {
      if(ch[i]==ch1[i])
      {
        count1++;
      }
    }
    puts(ch1);
    if(count==count1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}