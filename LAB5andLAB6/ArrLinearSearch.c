#include<stdio.h>
void main()
{
    int num,count=0;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&num);
    int arr[num],pos[num];
    printf("\n ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        pos[i]=0;
    }
    printf("ENTER THE ELEMENT TO SEARCH ");
    int search;
    scanf("%d",&search);
    int flag=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            pos[i]=i+1;
        }

    }
    if(flag==1)
    {
        printf("THE ELEMENT %d HAS BEEN FOUND : \n ",search);
        for(int i=0;i<num;i++)
        {
            if(pos[i]!=0)
            {
            printf("\n AT POSITION NUMBER %d ",pos[i]);
            }
        }
    }
    else
    {
        printf("ELEMENT WAS NOT FOUND ");
    }
}