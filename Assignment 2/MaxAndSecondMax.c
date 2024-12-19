#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of numbers you want to compare ");
    scanf("%d",&a);
    int b=0,dummy1=0,dummy2=0;
    for(int i=1;i<=a;i++)
    {
        printf("Enter the %d out of %d number ",i,a);
        scanf("%d",&b);
        if(b>=dummy1)
        {
          dummy2=dummy1;
          dummy1=b;
        }
        else if(b<dummy1)
        {
          if(b>=dummy2)
          {
            dummy2=b;
          }
        }
    }
    printf("THE MAXIMUM NUMBER IS %d ",dummy1);
    printf("\nTHE SECOND MAXIMUM NUMBER IS %d",dummy2);
}