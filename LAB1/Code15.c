#include<stdio.h>
void main()
{
    int p,c,m,e,h;
    printf(" Enter you marks in Mathematics ");
    scanf("%d",&m);
    printf(" Enter you marks in Physics ");
    scanf("%d",&p);
    printf(" Enter you marks in Chemistry ");
    scanf("%d",&c);
    printf(" Enter you marks in English ");
    scanf("%d",&e);
    printf(" Enter you marks in Hindi ");
    scanf("%d",&h);
    int total;
    total=p+c+m+e+h;
    printf("The total marks are %d \n",total);
    double per;
    per=(double)total/500*100;
    printf("The percentage is %5.5lf \n",per);
    if(per>=75)
    {
        printf("DISTINCTION");
    }
    if(per>=60&&per<75)
    {
    printf("FIRST DIVISION");
    }
    if(per<60&&per>=50)
    {
        printf("SECOND DIVISION");
    }
    if(per<50&&per>=40)
    {
        printf("THIRD DIVISION");
    }
    if(per<40&&per>=33)
    {
        printf("PASS");
    }
    if(per<33)
    {
        printf("FAIL");
    }
}