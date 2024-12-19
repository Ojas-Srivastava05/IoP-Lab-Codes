#include<stdio.h>
void main()
{
    int arr_count[6],choice;
    for(int i=0;i<6;i++)
    {
        arr_count[i]=0;
    }
    printf("ENTER THE TOTAL NUMBER OF VOTERS ");
    int voters;
    scanf("%d",&voters);
    for(int i=1;i<=voters;i++)
    {
     printf("ENTER YOUR CHOICE OF CANDIDATE FROM 1 TO 5 : ");   
    scanf("%d",&choice);
    switch(choice)
        {
        case 1: arr_count[0]++;
                break;
        case 2: arr_count[1]++;
                break;
        case 3: arr_count[2]++;
                break;
        case 4: arr_count[3]++;
                break;
        case 5: arr_count[4]++;
                break;
        default:arr_count[5]++;
                break;
        }
    }
    printf("VOTES CASTED FOR CANDIDATE 1 : %d \n",arr_count[0]);
    printf("VOTES CASTED FOR CANDIDATE 2 : %d \n",arr_count[1]);
    printf("VOTES CASTED FOR CANDIDATE 3 : %d \n",arr_count[2]);
    printf("VOTES CASTED FOR CANDIDATE 4 : %d \n",arr_count[3]);
    printf("VOTES CASTED FOR CANDIDATE 5 : %d \n",arr_count[4]);
    printf("SPOILT BALLOTS  : %d ",arr_count[5]);

}