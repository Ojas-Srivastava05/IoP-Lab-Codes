#include<stdio.h>
void main()
{
    int num;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&num);
    int arr[num];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n ENTER THE ELEMENT YOU WANT TO CHECK THE OCCURENCE OF ");
    int search,count=0,flag=0;
    scanf("%d",&search);
    for(int i=0;i<num;i++)
    {
        if(arr[i]==search)
        {
            count++;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("THE %d NUMBER WAS FOUND %d TIMES ",search,count);
    }
    else
    {
        printf("THE ENETERED NUMBER WAS NOT FOUND ");
    }
}