#include <stdio.h>
#include <string.h>

int main() {
    char name[5][20];
    int marks[5];
    int highest = -1;
    char highestscorer[20];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        getchar(); 

        total += marks[i];

        if (marks[i] > highest) {
            highest = marks[i];
            strcpy(highestscorer, name[i]);
        }
    }

    printf("\nName            Score\n");
    printf("------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-14s %d\n", name[i], marks[i]);
    }

    printf("\nHighest scorer: %s with score %d\n", highestscorer, highest);
    printf("Average: %.2f\n", total / 5.0);

    return 0;
}
