#include<stdio.h>
void main()
{
    int a,b,c;
    int flag=0;
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    printf("Enter the third number ");
    scanf("%d",&c);
    if(a>=b&&a>=c)
    {
     flag=a;
    }
    if(b>=a&&b>=c)
    {
        flag=b;
    }
    if(c>=a&&c>=b)
    {
        flag=c;
    }
    printf("%d is the greatest ",flag);
    
}