#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want the pattern till : ");
    scanf("%d",&n);
    int i=1;
    while(i<=2*n)
    {
        printf("%d,",i);
        i=i+2;
    }
}