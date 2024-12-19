#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE NUMBER TO PRINT THE SQUARE AND CUBE OF ");
    scanf("%d",&n);
    int *sptr,*cptr;
    sptr=&n;
    cptr=&n;
    printf("THE SQUARE OF THE NUMBER IS %d \n",(*sptr**sptr));
    printf("THE CUBE OF THE NUMBER IS %d \n",(*cptr**cptr**cptr));
}