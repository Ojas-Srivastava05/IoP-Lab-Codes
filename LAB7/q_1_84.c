#include<stdio.h>
struct book
    {
        int year;
        char aname[100],pname[100];
        float cost;
    };
int main()
    {
        struct book b1;
        printf("\n ENTER THE YEAR OF PUBLICATION OF THE BOOK ");
        scanf("%d",&b1.year);
        printf("\n ENTER THE NAME OF THE AUTHOR");
        scanf("%s",&b1.aname);
        printf("\n ENTER THE NAME OF THE PUBLISHER");
        scanf("%s",&b1.pname);
        printf("\n ENTER THE COST OF THE BOOK");
        scanf("%f",&b1.cost);
        printf("\n THE YEAR OF PUBLICATION OF THE BOOK IS/WAS : %d",b1.year);
        printf("\n THE NAME OF THE AUTHOR IS  : %s",b1.aname);
        printf("\n THE NAME OF THE PUBLISHER IS  : %s",b1.pname);
        printf("\n THE COST OF THE BOOK IS  : %f",b1.cost);
    }

