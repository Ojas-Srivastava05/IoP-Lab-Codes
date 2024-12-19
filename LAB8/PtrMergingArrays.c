#include <stdio.h>
void main()
{
    int n1, n2;
    printf("ENTER THE VALUE OF n1 and n2");
    scanf("%d %d", &n1, &n2);
    int arr1[n1];
    int arr2[n2];
    printf("ENTER THE ARRAY ELEMENTS ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("ENTER THE ARRAY ELEMENTS ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &arr1[0];
    ptr2 = &arr2[0];
    int arr3[n1 + n2];
    ptr3 = &arr3[0];
    for (int i = 0; i < n1; i++)
    {
        *(ptr3 + i) = *(ptr1 + i);
    }
    for (int i = n1; i < n1 + n2; i++)
    {
        *(ptr3 + i) = *(ptr2 + (i - n1));
    }
    printf("THE MERGED ARRAY IS ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d", *(ptr3 + i));
    }
}