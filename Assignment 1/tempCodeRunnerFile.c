#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st value ");
    scanf("%d",&a);
    printf("Enter 2nd value ");
    scanf("%d",&b);
    printf("Values assigned initially are %d %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values are %d %d",a,b);
    
}