#include<stdio.h>
void main()
{
    int num;
    printf("ENTER THE NUMBER OF TERMS IN THE ARRAY ");
    scanf("%d",&num);
    int arr[num];
    printf("ENTER THE %d ELEMENTS OF THE ARRAY ",num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid,ul=0,ll=num-1;
    int pivot=arr[num/2],search=pivot;
    /*SORTING THE ARRAY*/
    for(int i=0;i<num-1;i++)//PASS LOOP
    {
        for(int j=0;j<num-1;j++)//SWAP LOOP
        {
            if(arr[j]>arr[j+1])//BITWISE SWAP
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
    int flag=1,pos=0,count=0;
     /*STARTING BINARY SEARCH*/
     while(ul>ll)
     {
        mid=(ul+ll)/2;
        count++;
        if(arr[mid]>search)
        {
            ul=mid;    
        }
        else if(arr[mid]<search)
        {
            ll=mid;
        }
        else if(arr[mid]==search)
        {
            flag=0;
            pos=mid;
            break;
        }
        else if(ul>ll)
        {
            break;
        }        
     }
     if(flag==0)
     {
        printf("THE PIVOT ELEMENT %d HAS BEEN FOUND AT %d ",search,pos);
     }
     else
     {
        printf("THE PIVOT ELEMENT HAS NOT BEEN FOUND ");
     }

}          