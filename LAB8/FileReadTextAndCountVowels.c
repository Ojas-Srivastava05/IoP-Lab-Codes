#include<stdio.h>
#include<string.h>
void main()
{
    int vcount=0;
    char ch;
    FILE *fptr;
    fptr=fopen("LoduLalit.txt","w+");
    while((ch=getchar())!='\n')
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                        vcount++;
        }
    }
    printf("%d",vcount);
    fclose(fptr);
}