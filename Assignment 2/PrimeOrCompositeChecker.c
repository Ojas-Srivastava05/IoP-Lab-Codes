#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER TO CHECK PRIME OR COMPOSITE ");
    scanf("%d",&n);
    int rem=0,flag=0;
    for(int i=2;i<n;i++)
    { 
     rem=n%i;
     if(rem==0)
     {
        flag=1;
        break;
     }
     
    }
    if(flag==1)
    {
        printf("COMPOSITE NUMBER");
    }
    else
    {
        printf("PRIME NUMBER");
    }
}