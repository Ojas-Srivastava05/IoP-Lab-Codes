#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter three numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(d=a>b ? a:b)
    {
        if(e=d>c ? d:c)
        {
            printf("The Greatest number is %d ",e);
        }
    }
}