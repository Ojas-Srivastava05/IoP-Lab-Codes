#include<stdio.h>
void main()
{
    int arr[10];
    printf("ENTER THE NUMBER OF THE ARRAY ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sume=0,sumo=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sume=sume+arr[i];
        }
        else
        {
            sumo=sumo+arr[i];
        }
    }
    printf("SUM OF EVEN NUMBER OF THE ARRAY IS : %d \n",sume);
    printf("SUM OF ODD NUMBER OF THE ARRAY IS : %d ",sumo);

}