#include<stdio.h>
void main()
{
    char ch[7]={'I','V','X','L','C','D','M'};//Array defined for precedence order.
    int n;
    printf("ENTER THE NUMBER OF DIGITS IN ROMAN NUMERAL");
    scanf("%d",&n);
    char ch1[n];
    char ch2;
    int sum=0,sub=0;
    printf("ENTER A 7 DIGIT ROMAN NUMBER AND PUT 0 FOR BLANK SPACE ");
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&ch1[i]);
    }
    printf("THE ROMAN NUMERAL ENTERED IS : ");
    
    for(int i=0;i<n;i++)
    {
            if(ch1[i]!='0')
            {
            printf("%c",ch1[i]);
            }
        
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<7;i++)
    {
        if(ch1[i]=='I')
        {
            arr[i]=1;
        }
        if(ch1[i]=='V')
        {
            arr[i]=5;
        }
        if(ch1[i]=='X')
        {
            arr[i]=10;
        }
        if(ch1[i]=='L')
        {
            arr[i]=50;
        }
        if(ch1[i]=='C')
        {
            arr[i]=100;
        }
        if(ch1[i]=='D')
        {
            arr[i]=500;
        }
        if(ch1[i]=='M')
        {
            arr[i]=1000;
        }
    }
    printf("\n THE VALUE IS : ");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            if(arr[i]<arr[i+1])
            {
                sum=sum-arr[i];
            }
        else
        {
            sum=sum+arr[i];
        }
        }
        else if(i==n-1)
        {
            sum=sum+arr[i];
        }
        
    }
    
    printf("\n %d",sum);

}