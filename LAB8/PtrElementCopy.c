#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE %d ELEMENTS OF THE ARRAY ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=&arr[0];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=*ptr+i;
    }
    printf("THE ENTERED ARRAY AFTER COPYING IS");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr2[i]);
    }

    
}