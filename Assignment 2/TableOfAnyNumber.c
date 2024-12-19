#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number to print the table of ");
    scanf("%d",&a);
    int prod=0;
    for(int i=1;i<=10;i++)
    {
      prod=a*i;
      printf("%d times %d is %d \n",a,i,prod);
    }
}