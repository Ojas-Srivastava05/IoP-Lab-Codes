#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number to check PALINDROME ");
  scanf("%d",&a);
  int ori=a,remainder=0,reversed=0;
  while(a!=0)
  {
   remainder=a%10;
   reversed=reversed*10+remainder;
   a=a/10;
  }
  if(ori==reversed)
  {
    printf("PALINDROME NUMBER HAS BEEN ENTERED ");
  }
  else
  {
    printf("NOT PALINDROME NUMBER ");
  }
  return 0;
}