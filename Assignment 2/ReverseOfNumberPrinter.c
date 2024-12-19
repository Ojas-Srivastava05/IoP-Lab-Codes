#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to reverse ");
    scanf("%d",&a);
    int ori=a,sum=0,rem=0;
    while(a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("ORIGINAL NUMBER ENTERED WAS %d AND THE REVERSE OF THAT NUMBER IS %d ",ori,sum);
}