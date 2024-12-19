#include<stdio.h>

int main() {
    int num, entry;
    
    printf("ENTER THE NUMBER OF TERMS YOU WANT TO COMPARE: ");
    scanf("%d", &num);
    
    if(num <= 0) {
        printf("Invalid number of terms.\n");
        return 1; // Exit the program if the number of terms is invalid
    }

    int max, min;

    // Read the first entry to initialize max and min
    printf("ENTER 1 OUT OF %d NUMBERS: ", num);
    scanf("%d", &entry);
    max = min = entry; // Initialize both max and min to the first entry

    // Loop through the remaining numbers
    for(int i = 2; i <= num; i++) {
        printf("ENTER %d OUT OF %d NUMBERS: ", i, num);
        scanf("%d", &entry);

        if(entry > max) {
            max = entry;
        }
        if(entry < min) {
            min = entry;
        }
    }

    printf("THE MAXIMUM VALUE IS %d\n", max);
    printf("THE MINIMUM VALUE IS %d\n", min);

    return 0;
}