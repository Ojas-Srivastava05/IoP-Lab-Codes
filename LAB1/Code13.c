#include<stdio.h>
void main()
{
    int a;
    printf("Enter any number to check whether odd or even ");
    scanf("%d",&a);
    int check=a%2;
    if(check==0)
    {
     printf("The number entered is EVEN ");
    }
    else if(check==1)
    {
        printf("The number entered is ODD ");
    }
    else if(check==0)
    {
        printf("The number entered is ZERO ");
    }
}