#include<stdio.h>
void main()
{
    int arr[10];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of the numbers is : %d ",sum);
}