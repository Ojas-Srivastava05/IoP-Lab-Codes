#include<stdio.h>
void main()
{
    int choice;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&choice);
    int arr[choice];
    int choice1=choice,swap;
    printf("ENTER THE %d ELEMENTS OF THE ARRAY ",choice);
    for(int i=0;i<choice;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<choice-1;i++)
    {
        int j=0;
        for(;j<choice1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swap;
            }
           
        }
        choice1=choice1-1;
    }
    printf("THE SORTED ARRAY IS : ");
    for(int i=0;i<choice;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("THE MAXIMUM NUMBER IS : %d ",arr[choice-1]);
    printf("THE SECOND MAXIMUM NUMBER IS : %d ",arr[choice-2]);
}