#include<stdio.h>
int main()
{
    int fib=0,var1=0,var2=0;
    printf("Enter the number of terms you want in the Fabonacci series ");
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
     printf("%d ",fib);
     fib=var1+var2;
     var1=var2;
     if(fib==0)
     {
        fib=1;
     }
     var2=fib;
    }
}