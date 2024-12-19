#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE NUMBER OF INTEGERS YOU WANT TO COMPARE");
    scanf("%d",&n);
    int arr[n];
    int biggest;
    printf("ENTER THE %d ELEMENTS OF THE INTEGER ARRAY ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    biggest=arr[0];
    int *ptr;
    ptr=&biggest;
    for(int i=0;i<n;i++)
    {
        if(*ptr<arr[i])
        {
            ptr=&arr[i];
        }
    }
    printf("THE BIGGEST ELEMENT IS %d",*ptr);
}