#include<stdio.h>

int main() {
    int roll[10], sub1[10], sub2[10], sub3[10], total[10];
    int highestSub1 = 0, highestSub2 = 0, highestSub3 = 0, highestTotal = 0;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
    printf("ENTER THE ROLL NOS:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &roll[i]);
    }
    printf("\nENTER THE MARKS IN SUBJECT 1:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &sub1[i]);
    }
    printf("\nENTER THE MARKS IN SUBJECT 2:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &sub2[i]);
    }
    printf("\nENTER THE MARKS IN SUBJECT 3:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &sub3[i]);
    }
     for(int i = 0; i < 10; i++) {
        total[i] = sub1[i] + sub2[i] + sub3[i];

        if(sub1[i] > highestSub1) {
            highestSub1 = sub1[i];
            p1 = i;
        }
        if(sub2[i] > highestSub2) {
            highestSub2 = sub2[i];
            p2 = i;
        }
        if(sub3[i] > highestSub3) {
            highestSub3 = sub3[i];
            p3 = i;
        }
        if(total[i] > highestTotal) {
            highestTotal = total[i];
            p4 = i;
        }
    }
    printf("\nTHE HIGHEST MARKS IN SUBJECT 1 WERE OBTAINED BY ROLL NO. %d AND THEY WERE %d \n", roll[p1], sub1[p1]);
    printf("THE HIGHEST MARKS IN SUBJECT 2 WERE OBTAINED BY ROLL NO. %d AND THEY WERE %d \n", roll[p2], sub2[p2]);
    printf("THE HIGHEST MARKS IN SUBJECT 3 WERE OBTAINED BY ROLL NO. %d AND THEY WERE %d \n", roll[p3], sub3[p3]);
    printf("THE HIGHEST OVERALL MARKS WERE OBTAINED BY ROLL NO. %d AND THEY WERE %d \n", roll[p4], total[p4]);

    return 0;
}