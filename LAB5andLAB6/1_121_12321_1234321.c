#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=i-3;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=1;j<=4;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}