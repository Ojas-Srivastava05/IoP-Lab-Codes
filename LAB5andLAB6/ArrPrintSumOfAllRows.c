#include<stdio.h>
void main()
{
    int sum1=0,sum2=0,sum3=0;
    int arr[3][3];
    printf("ENTER THE ELEMENTS OF THE MATRIX ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
    printf("THE ENTERED MATRIX IS : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<3;j++)
        {
            sum1=sum1+arr[0][j];
            sum2=sum2+arr[1][j];
            sum3=sum3+arr[2][j];
        }
    
    printf("SUM OF ROW 1 IS : %d \n",sum1);
    printf("SUM OF ROW 2 IS : %d \n",sum2);
    printf("SUM OF ROW 3 IS : %d \n",sum3);
}