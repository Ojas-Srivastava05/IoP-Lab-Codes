#include <stdio.h>
void main()
{
    int arr1[3][3];
    printf("ENTER THE ELEMENTS OF THE FIRST MATRIX \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("THE FIRST MATRIX THAT WAS ENTERED IS : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    int *ptr1;
    ptr1 = &arr1[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && i != 1 && j != 1)
            {
                *(ptr1 + i * 3 + j) = *(ptr1 + i * 3 + j) ^ *(ptr1 + i * 3 + j + 2);
                *(ptr1 + i * 3 + j + 2) = *(ptr1 + i * 3 + j) ^ *(ptr1 + i * 3 + j + 2);
                *(ptr1 + i * 3 + j) = *(ptr1 + i * 3 + j) ^ *(ptr1 + i * 3 + j + 2);
            }
        }
    }
    printf("THE SWAPPED DIAGONAL MATRIX IS ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", *(ptr1 + i * 3 + j));
        }
        printf("\n");
    }
}