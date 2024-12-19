//CHECKING PRIME OR NOT
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number you want to check ");
    scanf("%d",&a);
    int flag=0;
    for(int i=2;i<a;i++)
    {
     if(a%i==0)
     {
        flag=1;
        break;
     }
    }
    if(flag==1)
    {
        printf("THE ENTERED NUMBER IS NOT PRIME ");
    }
    else
    {
        printf("ENTERED NUMBER IS PRIME ");
    }

}