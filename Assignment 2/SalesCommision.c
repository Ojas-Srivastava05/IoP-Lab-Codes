#include<stdio.h>
int main()
{
    int sales;
    printf("ENTER THE SALES AMOUNT IN INDIAN RUPEES ");
    scanf("%d",&sales);
    int com=0;
    if(sales<=500)
    {
        com=sales*0.05;
    }
    if(sales>500 && sales<=2000)
    {
        com=35+(sales-500)*0.10;
    }
    if(sales>2000 && sales<=5000)
    {
        com=185+(sales-2000)*0.12;
    }
    if(sales>5000)
    {
        com=sales*0.125;
    }
    printf("COMISSION IS : %d ",com);
}