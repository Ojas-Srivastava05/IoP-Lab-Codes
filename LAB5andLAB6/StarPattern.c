#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)//for loop to print 5 rows for pattern.
    {
        if(i%2!=0)/*I seperated odd rows and even rows as odd rows have odd * and even had even * , moreover it is obvious that the number of stars in a row is equal to the serial number of that row.*/
        {
            for(int j=5;j>=1;j--)//reverse for loop to print spaces
            {
                if(j!=i)//when the row and the serial number of printing are not same then we need to print space for example 1st row has 1 '*' so I assumed that it has 2 spaces before itself.
                {
                printf(" ");//printing spaces
                }
                if(j==i)//when the serial number of printing is same as the row number then it is time to print the '*'.
                {
                    for(int u=1;u<=j;u++)//since we need to print 1 '*' in 1st row 3 '*' in 3rd row so i made a loop to repeat itself equal to the row number it has.
                    {
                    printf("* ");//had to add an extra space after the '*' in order to achieve the pattern.
                    }
                }
            
            }
            
            printf("\n");//escape sequence to skip to the next line after printing a line
        }
        if(i%2==0)//checking if the row number is even.
        {
            for(int j=4;j>=2;j--)//loop to print spaces 
            {
                if(j!=i)
                {
                    printf(" ");
                }
                if(j==i)
                {
                    for(int u=1;u<=j;u++)
                    {
                        printf(" *");//adjusted the '*' to achieve the pattern
                    }
                }
            }
            printf("\n");
        }
    }
}