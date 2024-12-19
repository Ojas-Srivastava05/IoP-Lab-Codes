#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY \n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                *(ptr + i) = *(ptr + i) ^ *(ptr + j);
                *(ptr + j) = *(ptr + i) ^ *(ptr + j);
                *(ptr + i) = *(ptr + i) ^ *(ptr + j);
            }
        }
    }
    printf("\n THE SORTED ARRAY IS ");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
    }
}