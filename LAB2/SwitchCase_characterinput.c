#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    char op;
    printf("Enter operation to take place ");
    scanf(" %c",&op);
    if(b==0&&op=='/')
    {
      printf("INVALID OPERATION ");
      
    }
    int sum,sub,mul,div;
    switch(op)
   {
     case '+' :
    sum=a+b;
    printf("Sum is %d ",sum);
    break;
    case '-' :
    sub=a-b;
    printf("Difference is %d ",sub);
    break;
    case '*' :
    mul=a*b;
    printf("Product is %d ",mul);
    break;
    case '/' :
    div=a/b;
    printf("Quotient is %d ",div);
    break;
   }
}