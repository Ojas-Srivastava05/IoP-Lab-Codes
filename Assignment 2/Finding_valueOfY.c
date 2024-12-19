#include<stdio.h>
#include<math.h>
void main()
{
    int n ;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int y=0,x=0;
    if(n==1)
    {
     printf("Enter the value of x to find Y \n");
     scanf("%d",&x);
     y=1+x;
     printf("The value of Y is %d\n",y);
    }
    if(n==2)
    {
        printf("Enter the value of x to find Y \n");
        scanf("%d",&x);
        y=1+(x/n);
        printf("The value of Y is %d\n",y);
    }
    if(n==3)
    {
        printf("Enter the value of x to find Y \n");
        scanf("%d",&x);
        y=1+pow(x,n);
        printf("The value of Y is %d\n",y);
    }
    else if(n<1 || n>3)
    {
        printf("\n Enter the value of x to find Y ");
        scanf("%d",&x);
        y=1+n*x;
        printf("The value of Y is %d\n",y);
    }
}