#include<stdio.h>
void main()
{
    int r,c,swap=0;
    printf("ENTER NUMBER OF ROWS AND COLUMNS OF THE MATRIX \n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("ENTER THE ELEMENTS OF THE MATRIX : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("THE MATRIX ENTERED IS : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j>i)//making sure that the swapping is not done multiple times by applying a condition that index number of row is less that index number of column.
            {
            arr[i][j]=arr[i][j]^arr[j][i];
            arr[j][i]=arr[i][j]^arr[j][i];
            arr[i][j]=arr[i][j]^arr[j][i];

            }
        }
    }
    printf("THE TRANSPOSED MATRIX IS : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
}