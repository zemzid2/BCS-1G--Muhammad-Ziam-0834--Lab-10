#include <stdio.h>
#include <string.h>

int main() {
    char *students[4] = {"Alice", "Bob", "Charlie", "Diana"};

    char *courses[4][6] = {
        {"Math", "Physics", "Chemistry", NULL},
        {"Biology", "Math", NULL},
        {"Physics", "History", "Art", "Math", NULL},
        {"Chemistry", NULL}
    };

    printf("=== Student Course List ===\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for (int j = 0; courses[i][j] != NULL; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }

    char searchCourse[20] = "Physics";
    printf("\n=== Students taking %s ===\n", searchCourse);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; courses[i][j] != NULL; j++) {
            if (strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s\n", students[i]);
                break;
            }
        }
    }

    printf("\n=== Overloaded Students (more than 3 courses) ===\n");
    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; courses[i][j] != NULL; j++) {
            count++;
        }
        if (count > 3) {
            printf("%s (%d courses)\n", students[i], count);
        }
    }

    return 0;
}
