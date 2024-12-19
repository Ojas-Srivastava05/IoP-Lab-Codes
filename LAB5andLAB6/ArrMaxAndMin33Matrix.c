#include<stdio.h>
void main()
{
    int arr[3][3];
    printf("ENTER THE ELEMENTS OF THE MATRIX \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("THE MATRIX ENTERED IS : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    int swap,temp,max,min;
    max=min=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("\n THE MAXIMUM ELEMENT IS : %d",max);
    printf("\n THE MINIMUM ELEMENT IS : %d",min);
}