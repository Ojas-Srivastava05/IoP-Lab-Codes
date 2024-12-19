#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want the pattern till : ");
    scanf("%d",&n);
    int exp=0;
    for(int i=1;i<=n;i++)
    {
     exp=i*i;
     printf("%d ",exp);
    }
}