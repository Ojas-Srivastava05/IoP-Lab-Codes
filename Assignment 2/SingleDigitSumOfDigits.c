#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to print Sum of digits ");
    scanf("%d",&num);
    int sum=0,rem=0,rem2=0,sum2=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    while(sum!=0)
    {
        rem2=sum%10;
        sum2=sum2+rem2;
        sum=sum/10;
    }
    printf("SUM OF DIGITS IS %d ",sum2);
}