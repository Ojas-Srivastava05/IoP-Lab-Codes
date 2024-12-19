#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest number entered ",a);
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("%d is the greatest number entered ",b);
        }
    }
    if(c>b)
    {
        if(c>a)
        {
            printf("%d is the greatest number entered ",c);
        }
    }

}