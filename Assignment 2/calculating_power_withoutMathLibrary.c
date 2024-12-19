//PROGRAM TO CALCULATE POWER WITHOUT USING HEADER FILE <math.h>
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the base value ");
    scanf("%d",&a);
    int result=1;
    printf("Enter the exponent value ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        result=result*a;
    }
    printf("The answer is %d",result);
}