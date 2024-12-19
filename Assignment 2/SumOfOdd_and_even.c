//PRINTING SUM OF ODD AND EVEN NUMBERS B/W 1 TO N
#include<stdio.h>
void main()
{
    int N;
    printf("Enter a number to find the sum of odd and even to ");
    scanf("%d",&N);
    int sum_O=0;
    int sum_E=0;
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            sum_E=sum_E+i;
        }
        else if(i%2==1)
        {
            sum_O=sum_O+i;
        }
    }
    printf("Sum of even numbers is %d ",sum_E);
    printf("\nSum of odd numbers is %d ",sum_O);
}