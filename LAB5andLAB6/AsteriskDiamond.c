#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int u=1;u<=i;u++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<=i;j++)//adjusted the pattern after running the program.
        {
            printf(" ");
        }
        for(int u=4;u>=i;u--)
        {
            printf(" *");
        }
        printf("\n");
    }
}