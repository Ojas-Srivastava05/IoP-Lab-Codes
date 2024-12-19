#include<stdio.h>
void main()
{
    int sec;
    printf("Enter time in seconds ");
    scanf("%d",&sec);
    int hour,min,extra;
    hour=sec/3600;
    extra=sec%3600;
    min=extra/60;
    printf("The time of the day is %d  %d",hour,min);
}