#include<stdio.h>
int main()
{
    int p,r,t,sim_interest;
    printf("Enter principle amount ");
    scanf("%d",&p);
    printf("Enter the rate of interest ");
    scanf("%d",&r);
    printf("Enter the time period in months ");
    scanf("%d",&t);
    sim_interest=p*r*t/100;
    printf("The simple interest is =%d",sim_interest);
}