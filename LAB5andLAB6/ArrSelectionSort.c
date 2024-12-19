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
    int select=arr[0],swap=0;
    for(int i=0;i<num;i++)
    {
        select=arr[i];
        for(int j=0;j<num;j++)
        {
            if(select>arr[j])
            {
                swap=arr[j];
                arr[j]=select;
                select=swap;
            }
        arr[i]=select; //I am not able to find the error even after tracing that why my array is being printed in the reverse order,I want the array to be sorted in ASCENDING ORDER as the conditions are applied like that only but the array is being printed in DESCENDING ORDER so in order to atleast get the correct answer I have printed the Array in Reverse Order.
        }
    }
    printf("\n THE SORTED ARRAY IS : ");
    for(int i=num-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}