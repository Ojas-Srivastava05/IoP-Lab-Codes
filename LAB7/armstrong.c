#include<stdio.h>
int armstrong(int a);
int main(int a)
{
    printf("ENTER A NUMBER TO CHECK");
    scanf("%d",&a);
    int flag=armstrong(a);
    if(flag==1)
    {
        printf("ARMSTRONG");
    }
    else
    {
        printf("NOT ARMSTRONG");
    }
}
int armstrong(int a)
{
    int rem,sum=0,num=a;;
    while(a!=0)
    {
       
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    if(sum==num)
    {
        return 1;
    }

}