#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf(" ");
        }
        for(int u=1;u<=i;u++)
        {
            printf("%d",u);
        }
        printf("\n");

    }
}