#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two values ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The entered values were %d %2d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The Swapped values are %d %d \n",a,b);
    
}