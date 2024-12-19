#include<stdio.h>
void main()
{
    int arr[6];
    int count=6,temp;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<count;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}