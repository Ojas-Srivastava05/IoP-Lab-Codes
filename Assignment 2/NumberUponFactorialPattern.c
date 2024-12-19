#include<stdio.h>
int main()
{
    int term;
    printf("ENTER THE NUMBER OF TERMS YOU WANT THE SUM TILL");
    scanf("%d",&term);
    int fac=1,sum=0;
    for(int i=1;i<=term;i++)
    {
     for(int j=1;j<=i;j++)
     {
        fac=fac*j;
     }
     sum=sum+(i/fac);
    }
    printf("The sum of factorials is : %d",sum);
}