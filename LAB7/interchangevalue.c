#include<stdio.h>
int interchange(int a,int b);
int main()
{
    int a,b;
    printf("ENTER THE VALUES OF  a AND b");
    scanf("%d %d",&a,&b);
    interchange(a,b);

}
int interchange(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}