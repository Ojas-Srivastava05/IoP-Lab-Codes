#include <stdio.h>
/*
struct ournode
{
    char x,y,z;
};
    int main()
    {
        struct ournode p={'1','0','a'+2};
        struct ournode *q=&p;
        printf("%c %c",*((char*)q+1),*((char*)q+2));
        return 0;
    }
    */
   //----------------------------
//
/*
int main()
{
    char c="ICRBCSIT17";
    char *p=c;
    printf("%s",c+2[p]-6[p]-1);
}*/
/*
int main()
{
    int arr[];
    printf("%d \n",ip[1]);
    ip=arr+4;
}*/
/*
{
    char str[] = "CProgramming";
    char *p = str;
    p += 3;                 // Points to 'r'
    printf("%c\n", *(p++)); // 'r'
    printf("%s\n", p);      // "ogramming"
    return 0;
}
-----------------------------------------
{
    int ary[4]={1,2,3,4};
    int *p=ary+3;
    printf("%d \n",p[-2]);
}
---------------------------------------
{
    int a[5] ={2,4,6,8,10};
    int i,sum=0,*b=a+4;
    for(int i=0;i<5;i++)
    {
        sum=sum+(*b-i)-*(b-i);
    }
    printf("THE SUM IS %d \n",sum);
}*/
/*
int main()
{
    int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    int **ptr=p;
    ptr++;
    printf("\n %d %d %d ",ptr-p,*ptr-a,**ptr);
    *ptr++;
    printf("\n %d %d %d ", ptr - p, *ptr - a, **ptr);
    *++ptr;
    printf("\n %d %d %d ", ptr - p, *ptr - a, **ptr);
    ++*ptr;
    printf("\n %d %d %d ", ptr - p, *ptr - a, **ptr);
}*/