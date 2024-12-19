#include<stdio.h>
void main()
{
    int num,count;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&num);
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rot,a;
    printf("ENTER THE NUMBER OF POSITIONS YOU WANT TO ROTATE THE ARRAY TO : ");
    scanf("%d",&rot);
    int arr2[num];
    for(int i=0;i<num;i++)
    {
        if(i+rot<num)
        {
            arr2[i+rot]=arr[i];
        }
        if(i+rot>=num)
        {
            arr2[i+rot-num]=arr[i];
        }
    }
    printf("THE ARRAY AFTER ROTATION IS : \n");
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr2[i]);
    }
}