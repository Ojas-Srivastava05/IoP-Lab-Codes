#include<stdio.h>
void main()
{
    //ASSUMING THE ORDER OF THE MATRICES TO BE 3x3 ONLY
    int arr1[3][3],arr2[3][3],arr3[3][3];
    printf("ENTER THE ELEMENTS OF THE FIRST MATRIX \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("ENTER THE ELEMENTS OF THE SECOND MATRIX \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
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
    printf("THE SECOND MATRIX THAT WAS ENTERED IS : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr2[i][j]);
        }
        printf("\n");
    }
    int *ptr1,*ptr2,*ptr3;
    ptr1=&arr1[0][0];
    ptr2=&arr2[0][0];
    ptr3=&arr3[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(ptr3+i*3+j)=0;
            for(int k=0;k<3;k++)
            {
                *(ptr3+i*3+j)=*(ptr3+i*3+j)+(*(ptr1+i*3+k)**(ptr2+k*3+j));
            }
        }
    }
    printf("THE MATRIX AFTER MULTIPLICATION IS ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }
}
