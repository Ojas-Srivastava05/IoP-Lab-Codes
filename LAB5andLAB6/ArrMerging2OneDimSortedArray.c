#include<stdio.h>
void main()
{
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY A ");
    int numa;
    scanf("%d",&numa);
    int counta=numa;
    int arr1[numa];
    printf("ENTER THE ELEMENTS OF A ARRAY ");
    for(int j=0;j<numa;j++)
    {
        scanf("%d",&arr1[j]);
    }
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY B");
    int numb;
    scanf("%d",&numb);
    int countb=numb;
    int arr2[numb];
    printf("ENTER THE ELEMENTS OF B ARRAY ");
    for(int j=0;j<numb;j++)
    {
        scanf("%d",&arr2[j]);
    }
    printf("THE FIRST ARRAY IS : ");
    for(int i=0;i<numa;i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\n THE SECOND ARRAY IS : ");
    for(int i=0;i<numb;i++)
    {
        printf("%d  ",arr2[i]);
    }
    /*Merging starts*/
    int arr3[numa+numb];
    for(int i=0;i<numa;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<numb;i++)
    {
        arr3[i+numa]=arr2[i];
    }
    printf("\n THE MERGED ARRAY IS : ");
    for(int i=0;i<numa+numb;i++)
    {
        printf("%d \t",arr3[i]);
    }
    /*Sorting starts*/
    int swap;
    for(int i=0;i<numa+numb-1;i++)//Pass loop
    {
        for(int j=0;j<numa+numb;j++)//swap loop
        {
            if(arr3[j+1]<arr3[j])
            {
                arr3[j+1]=arr3[j+1]^arr3[j];//I am using Bitwise swap instead of the normal swapping of elements using the swap variable which was taught by Praveen Sir in classroom.
                arr3[j]=arr3[j+1]^arr3[j];
                arr3[j+1]=arr3[j+1]^arr3[j];
            }
        }
    }
    printf("\n THE SORTED AND MERGED ARRAY IS ");
    for(int i=0;i<numa+numb;i++)
    {
        printf("%d \t",arr3[i]);
    }

}