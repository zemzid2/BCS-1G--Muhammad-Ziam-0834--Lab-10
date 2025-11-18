#include <stdio.h>
#include <string.h>

int main() {
    char msg[200];
    char out[200];
    int choice;

    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar(); 

    printf("Enter your message: ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    int len = strlen(msg);

    if (choice == 1) {
        for (int i = 0; i < len; i++)
            out[i] = msg[i] + 3;   
        out[len] = '\0';
        printf("Encrypted: %s\n", out);
    }

    else if (choice == 2) {
        for (int i = 0; i < len; i++)
            out[i] = msg[i] - 3;  
        out[len] = '\0';
        printf("Decrypted: %s\n", out);
    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}
