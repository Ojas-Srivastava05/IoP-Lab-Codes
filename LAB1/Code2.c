#include<stdio.h>
void main()
{
    int eng,mat,sci,hin,sst,per;
    double total;
    printf("Enter your marks in eng ");
    scanf("%d",&eng);
    printf("Enter your marks in mat ");
        scanf("%d",&mat);
    printf("Enter your marks in sci ");
        scanf("%d",&sci);
    printf("Enter your marks in hin ");
        scanf("%d",&hin);
    printf("Enter your marks in sst ");
        scanf("%d",&sst);
        total=eng+hin+sst+mat+sci;
        printf("The total marks obtained are =%d \n",eng+mat+sci+hin+sst );
        per=(total/500)*100;
        printf("The percentage is =%d",per);
}