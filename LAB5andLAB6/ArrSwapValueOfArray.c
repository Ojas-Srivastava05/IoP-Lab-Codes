#include<stdio.h>
void main()
{
    int arr1[10];
    printf("ENTER THE 10 ELEMENTS OF FIRST ARRAY ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[10];
    printf("ENTER THE 10 ELEMENTS OF SECOND ARRAY ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf(" THE FIRST ARRAY BEFORE SWAPPING WAS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n THE SECOND ARRAY BEFORE SWAPPING WAS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr2[i]);
    }
    int arr3[10];
    for(int i=0;i<10;i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3[i];
    }
    printf("\n THE FIRST ARRAY AFTER SWAPPING IS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr1[i]);
    }
    printf("\n THE SECOND ARRAY AFTER SWAPPING IS : ");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr2[i]);
    }


}