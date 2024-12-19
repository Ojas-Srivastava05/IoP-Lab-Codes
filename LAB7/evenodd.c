#include<stdio.h>
int evenodd(int a);
int main()
{
    int a,flag;
    printf("ENTER THE NUMBER TO CHECK ");
    scanf("%d",&a);
    flag=evenodd(a);
    if(flag==1)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
int evenodd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    return 0;
}
