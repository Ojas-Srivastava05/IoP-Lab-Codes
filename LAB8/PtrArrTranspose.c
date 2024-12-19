#include<stdio.h>
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
    printf("THE ENTERED MATRIX IS ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    int *ptr1;
    ptr1=&arr1[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i<j)
            {
                *(ptr1 + i + 3 * j) = *(ptr1 + i + 3 * j) ^ *(ptr1 + i * 3 + j);
                *(ptr1 + i * 3 + j) = *(ptr1 + i + 3 * j) ^ *(ptr1 + i * 3 + j);
                *(ptr1 + i + 3 * j) = *(ptr1 + i + 3 * j) ^ *(ptr1 + i * 3 + j);
            }
        }
    }
    printf("THE MATRIX AFTER TRANSPOSE IS ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
}