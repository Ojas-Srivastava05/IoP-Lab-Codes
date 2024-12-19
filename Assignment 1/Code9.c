#include<stdio.h>
void main()
{
    printf("Enter 1 for 12 hr format and 2 for 24 hour format"); 
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter 1 for 'am' and 2 for 'pm'");
        int choice1;
        scanf("%d",&choice1);
        if(choice1==1)
        {
            int hour1,min1,sec1;
            printf("Enter the hour of day ");
            scanf("%d",&hour1);
            printf("Enter the minutes of time ");
            scanf("%d",&min1);
            printf("Enter the seconds ");
            scanf("%d",&sec1);
            int total,s1,s2;
            s1=hour1*60*60;
            s2=min1*60;
            total=s1+s2+sec1;
            printf("The total time in seconds is = %d",total);

        }
        else if(choice==2)
        {
            int hour2,min2,sec2;
            printf("Enter the hour of the day ");
            scanf("%d",&hour2);
            hour2+=12;
            printf("Enter the minutes of time ");
            scanf("%d",&min2);
            printf("Enter the seconds ");
            scanf("%d",&sec2);
            int total2,s3,s4;
            s3=hour2*60*60;
            s4=min2*60;
            total2=s3+s4+sec2;
            printf("The total time in seconds is = %d",total2);
        }
    }
    else if(choice==2)
    {
        int hour3,min3,sec3,total3,s5,s6;
        printf("Enter the hour of the day ");
        scanf("%d",&hour3);
        printf("Enter the minutes of time");
        scanf("%d",&min3);
        printf("Enter the seconds ");
        scanf("%d",&sec3);
        s5=hour3*60*60;
        s6=min3*60;
        total3=s5+s6+sec3;
        printf("The total time in seconds is = %d",total3);
    }
}