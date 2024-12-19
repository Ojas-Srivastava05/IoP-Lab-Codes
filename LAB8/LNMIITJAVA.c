#include<stdio.h>
struct student
{
    char name[100];
    int rollno;
    int mark;
} stud;
void main()
{
    FILE *fptr;
    fptr=fopen("LNMIIT.JAVA","w");
    int n;
    printf("ENTER THE NUMBER OF STUDENTS ");
    scanf("%d",&n);
    struct student students[n];
    for(int i=0;i<n;i++)
    {
        printf("ENTER THE DETAILS OF THE STUDENTS :");
        printf("ENTER THE ROLL NO OF THE STUDENT");
        scanf("%d",&students[i].rollno);
        printf("Name : ");
        scanf("%s",students[i].name);
        printf("TOTAL MARKS : ");
        scanf("%d",students[i].mark);
        fprintf(fptr, "Roll Number: %d\nName: %s\nTotal Marks: %d\n\n",students[i].rollno,students[i].name,students[i].mark);
    }
    fclose(fptr);

}