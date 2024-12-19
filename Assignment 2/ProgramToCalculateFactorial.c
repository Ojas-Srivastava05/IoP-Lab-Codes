#include<stdio.h>
void main()
{
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    int prod=1;
    for(int j=1;j<=i;j++)
    {
     prod=prod*j;
    }
    printf("Factorial value is %d ",prod);
}