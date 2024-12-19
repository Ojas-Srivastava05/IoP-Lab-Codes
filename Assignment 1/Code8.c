#include<stdio.h>
void main()
{
    int sec=31558150;
    int min=sec/60;
    int hour=min/60;
    int day=hour/24;
    printf("Earth takes = %d seconds \n",sec);
    printf("Earth takes = %d minutes \n",min);
    printf("Earth takes = %d hours \n",hour);
    printf("Earth takes = %d days \n",day); 
    printf("To complete one revolution ");
}