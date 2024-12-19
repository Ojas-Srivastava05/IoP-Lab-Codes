#include<stdio.h>
int main()
{
   int num,sum=0,rem=0;
   printf("ENTER THE NUMBER YOU WANT TO CHECK ARMSTRONG OR NOT");
   scanf("%d",&num);
   int ori=num;
   while(num!=0)
   {
      rem=num%10;
      sum=sum+rem*rem*rem;
      num=num/10;
   }
   if (ori==sum)

   {
      printf("THE ENTERED NUMBER IS ARMSTRONG");
   }
   else{
      printf("IT IS NOT ARMSTRONG");
   }
   
}