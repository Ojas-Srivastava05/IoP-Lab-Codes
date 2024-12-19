#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,op;
    char ch;
    double result;
    printf("Enter the values to calculate ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the operation to take place 1 for +,2 for -,3 for *,4 for /");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
    
        result=(double)a+b;
        printf("The answer is %lf ",result);
        break;
    
    case 2: 
     
      result=(double)a-b;
      printf("The answer is %lf ",result);
      break;
    
    case 3:
    
        result=(double)a*b;
        printf("The answer is %lf ",result);
        break;
    
    case 4:
    
        result=(double)a/b;
        printf("The answer is %lf ",result);
        break;
    
    }

}