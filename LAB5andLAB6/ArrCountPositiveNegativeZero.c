#include<stdio.h>
void main()
{   
    int arr[10],countP=0,countN=0,countZero=0;
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++)
    {
        if(arr[j]>0)
        {
            countP++;
        }
        else if(arr[j]<0)
        {
            countN++;
        }
        else
        {
            countZero++;
        }
    }
    printf("THE NUMBER OF POSITIVE NUMBERS IS : %d \n",countP);
    printf("THE NUMBER OF NEGATIVE NUMBERS IS : %d \n",countN);
    printf("THE NUMBER OF ZERO(s) IS : %d ",countZero);

}