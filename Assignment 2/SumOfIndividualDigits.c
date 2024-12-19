#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    int rem=0,sum=0;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("SUM OF THE DIGITS IS %d",sum);
}