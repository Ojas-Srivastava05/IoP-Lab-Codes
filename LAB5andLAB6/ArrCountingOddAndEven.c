#include<stdio.h>
void main()
{
    int count1=0,count2=0;
    int arr[10];
    printf("ENTER THE 10 NUMBERS oF THE ARRAY ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    } 
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
          count1++;
        }
        else
        {
            count2++;
        }

    }
    printf("THE NUMBER OF EVEN NUMBERS IS : %d \n",count1);
    printf("THE NUMBER OF ODD NUMBERS IS : %d \n",count2);
}