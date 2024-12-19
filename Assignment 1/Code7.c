#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int choice;
    printf("Enter 1 for equilateral triangle or any other number for other triangle ");
    scanf("%d",&choice);
    if(choice==1)
    {
        double s;
        printf("Enter the length of the side of the triangle ");
        scanf("%lf",&s);
        double area1;
        area1=(sqrt(3)*s*s)/4;
        printf("The area of the triangle is = %5.5lf ",area1);
    }
    else
    {
        double l,b;
        printf("Enter the base and height of the triangle ");
        scanf("%lf%lf",&l,&b);
        double area2;
        area2=0.5*l*b;
        printf("The area of the triangle is = %5.5lf ",area2);
    }
}
