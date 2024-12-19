#include<stdio.h>
void main()
{
  printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY \n ");
  int num;
  scanf("%d",&num);
  int arr[num];
  printf("ENTER THE ELEMENTS OF THE ARRAY ");
  for(int i=0;i<num;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\n THE ARRAY ENTERED IS : ");
  for(int i=0;i<num;i++)
  {
    printf("%d \t",arr[i]);
  }
  int swap;
  for(int i=0;i<=num/2;i++)
  {
    swap=arr[i];
    arr[i]=arr[num-i-1];
    arr[num-i-1]=swap;
  }
  printf("\n THE SWAPPED ARRAY IS : ");
  for(int i=0;i<num;i++)
  {
    printf("%d \t",arr[i]);
  }
}