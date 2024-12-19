#include<stdio.h>
int main()
{
    int unit;
    printf("ENTER THE NUMBER OF UNITS ");
    scanf("%d",&unit);
    int cost=0;
    if(unit<=200)
    {
        cost=unit*0.5;
    }
    if(unit>200 && unit<=400)
    {
        cost=100+(unit-200)*0.65;
    }
    if(unit>400 && unit<=600)
    {
        cost=230+(unit-400)*0.80;
    }
    if(unit>600)
    {
        cost=425+(unit-600)*1.25;
    }
    printf("THE ELECTRICITY BILL IS : %d",cost);
}