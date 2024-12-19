//Matrix multiplication using pointers
/*
#include<stdio.h>
int main()
{
    int m1[3][3];
    int m2[3][3];
    printf("ENTER THE ELEMENTS OF MATRIX 1 \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("THE ENTERED MATRIX 1 IS \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",m1[i][j]);
        }
        printf("\n");
    }
    printf("ENTER THE ELEMENTS OF MATRIX 2 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("THE ENTERED MATRIX 2 IS \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", m2[i][j]);
        }
        printf("\n");
    }
    int *ptr1[3],*ptr2[3];
    *ptr1=&m1[0][0];
    *ptr2=&m2[0][0];
    int m3[3][3];
    int *ptr3[3];
    *ptr3[0] = &m3[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m3[i][j]=0;
        }
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m3[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
            }
           
            
        }
    }
    printf("THE MULTIPLIED MATRIX BY NORMAL METHOD IS \n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",m3[i][j]);
        }
        printf("\n");
    }
    //NOW MULTIPLYING THE MATRIX BY POINTER METHOD
    for(int i=0;i<3;i++)
    {
        *(ptr3+i)=0;
        for(int j=0;j<3;j++)
        {
            *(ptr2+j)=m2[j][i];
            *(ptr3+i)=*(ptr3+i) + (*(ptr1+j)) * (*(ptr2+j));
        }

    }
    printf("THE MULTIPLIED MATRIX BY USING POINTERS IS \n");
    for(int i=0;i<9;i++)
    {
        printf("%d",*(ptr3+i));
    }
}
*/
//CHAT GPT METHOD
/*
#include <stdio.h>

int main()
{
    int m1[3][3]; // First matrix
    int m2[3][3]; // Second matrix
    int m3[3][3]; // Result matrix for normal method
    int m4[3][3]; // Result matrix for pointer-based method

    // Input for Matrix 1
    printf("ENTER THE ELEMENTS OF MATRIX 1 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    // Display Matrix 1
    printf("THE ENTERED MATRIX 1 IS:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    // Input for Matrix 2
    printf("ENTER THE ELEMENTS OF MATRIX 2 (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    // Display Matrix 2
    printf("THE ENTERED MATRIX 2 IS:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    // Initialize result matrix for normal method
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3[i][j] = 0;
        }
    }

    // Matrix multiplication using normal method
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display the result of normal method
    printf("THE MULTIPLIED MATRIX BY NORMAL METHOD IS:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }

    // Initialize result matrix for pointer-based method
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m4[i][j] = 0;
        }
    }

    // Pointer-based multiplication
    int *ptr1 = &m1[0][0]; // Pointer to matrix 1
    int *ptr2 = &m2[0][0]; // Pointer to matrix 2
    int *ptr4 = &m4[0][0]; // Pointer to result matrix

    for (int i = 0; i < 3; i++) // Loop through rows of m1
    {
        for (int j = 0; j < 3; j++) // Loop through columns of m2
        {
            *(ptr4 + i * 3 + j) = 0;    // Initialize element
            for (int k = 0; k < 3; k++) // Perform dot product
            {
                *(ptr4 + i * 3 + j) += *(ptr1 + i * 3 + k) * *(ptr2 + k * 3 + j);
            }
        }
    }

    // Display the result of pointer-based method
    printf("THE MULTIPLIED MATRIX BY USING POINTERS IS:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(ptr4 + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}
*/
//MATRIX TRANSPOSE USING POINTERS
#include<stdio.h>
void main()
{
    int arr[3][3];
    int *ptr=&arr[0][0];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(ptr+i*3+j));
        }
    }
    printf("\n THE ENTERED MATRIX IS \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",*(ptr+i*3+j));
        }
        printf("\n");
    }
    printf("THE TRANSPOSED MATRIX IS \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i<j)
            {
                *(ptr+i*3+j)=*(ptr+i+(j*3)+j);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",*(ptr+i*3+j));
        }
        printf("\n");
    }
}