#include<stdio.h>
void main()
{
    int arr1[10],arr2[10],arr3[10];
    printf("ENTER THE 10 ELEMENTS OF FIRST ARRAY ");
    for(int j=0;j<10;j++)
    {
        scanf("%d",&arr1[j]);
    }
    printf("ENTER THE 10 ELEMENTS OF SECOND ARRAY ");
    for(int j=0;j<10;j++)
    {
        scanf("%d",&arr2[j]);
    }
    printf("THE FIRST ARRAY IS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\n THE SECOND ARRAY IS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr2[i]);
    }
    printf("\n THE SUM OF BOTH THE ARRAYS IS : ");
    for(int i=0;i<10;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("%d ",arr3[i]);
    }

}