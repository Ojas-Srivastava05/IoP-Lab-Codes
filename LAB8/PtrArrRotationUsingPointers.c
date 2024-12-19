#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE LENGTH OF THE ARRAY YOU WANT TO ROTATE\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY  \n");
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    int k,temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    printf("ENTER THE VALUE BY WHICH YOU WANT TO ROTATE THE ARRAY \n");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(i+k<n)
        {
            
            temp[i+k]=*(ptr+i);
        }
        else
        {
            temp[n-i-1]=*(ptr+i);
        }
    }
    printf("THE ROTATED ARRAY IS ");
    for(int i=0;i<n;i++)
    {
        printf("%d",temp[i]);
    }

}