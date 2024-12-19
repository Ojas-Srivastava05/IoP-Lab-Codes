#include<stdio.h>
int palindrome(int a);
int main()
{
    int a;
    printf("ENTER THE NUMBER TO CHECK");
    scanf("%d",&a);
    int flag=palindrome(a);
    if(flag==1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}
int palindrome(int a)
{
    int num,rem,sum=0;
    num=a;
    while(a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    if(sum==num)
    {
      return 1;
    }
    else
    {
        return 0;
    }
}
