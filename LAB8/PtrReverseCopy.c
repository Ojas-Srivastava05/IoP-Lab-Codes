#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS OF THE ARRAY ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        arr2[i]=*(ptr+(n-i-1));
    }
    printf("THE ELEMENTS OF THE ARRAY AFTER REVERSE COPY ARE");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr2[i]);
    }
}