#include<stdio.h>
void main()
{
    int arr1[3][3],arr2[3][3],result[3][3];
    printf("ENTER THE VALUE OF 1st MATRIX \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("ENTER THE VALUE OF 2nd MATRIX \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("THE 1st MATRIX IS \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("THE 2nd MATRIX IS \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",arr2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("THE VALUE OF THEIR SUMMATION IS : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }
}
