#include<stdio.h>
void main()
{
    double cm,m,p,c,e;
    printf("Enter your marks in Mathematics out of 200 ");
    scanf("%lf",&m);
    printf("Enter your marks in Physics out of 200 ");
    scanf("%lf",&p);
    printf("Enter your marks in Chemistry out of 200 ");
    scanf("%lf",&c);
    printf("Enter marks in entrance exam out of 100 ");
    scanf("%lf",&e);
    cm=(m+p+c)*0.5+e;
    printf("The CUTOFF marks for you are %lf",cm);
}