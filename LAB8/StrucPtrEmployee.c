#include<stdio.h>

    struct employee
    {
        int empnum;
        char name[100];
        float emppay; 
    }emp;
    void main()
    {
        int employ[50];
        struct employee *ptr;
        ptr = &emp;
        printf("ENTER THE EMPLOYEE NUMBER \n ");
        scanf("%d", &ptr->empnum);
        printf("ENTER THE EMPLOYEE NAME \n ");
        scanf("%s",ptr->name);
        printf("ENTER THE EMPLOYEE BASIC SALARY ");
        scanf("%f",&ptr->emppay);
        printf("\n EMPLOYEE INFO -----------");
        printf("\nEMPLOYEE NAME %s ",ptr->name);
        printf("\nEMPLOYEE NUMBER %d",ptr->empnum);
        printf("\nEMPLOYEE BASIC PAY %f",ptr->emppay);
    }