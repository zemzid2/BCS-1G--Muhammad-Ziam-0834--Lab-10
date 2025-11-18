#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    int hasupper = 0;
    int hasspecial = 0;
    int hasdigit = 0;
    int haslength = 0;
    
    printf("Enter password : ");
    fgets(password, sizeof(password), stdin);
    
    password[strcspn(password, "\n")] = '\0';
    
    int length = strlen(password);
    
    if (length >= 8) {
        printf("Length is correct\n");
        haslength = 1;
    }
    
    for (int i = 0; i < length; i++) {
        if (!hasupper && password[i] >= 'A' && password[i] <= 'Z') {
            hasupper = 1;
            printf("Has an uppercase letter\n");
        }
        if (!hasdigit && password[i] >= '0' && password[i] <= '9') {
            hasdigit = 1;
            printf("Has a digit\n");
        }
        if (!hasspecial && (password[i] == '@' || password[i] == '!' ||
                            password[i] == '$' || password[i] == '%' ||
                            password[i] == '#')) {
            hasspecial = 1;
            printf("Has a special character\n");
        }
    }
    
    if (!hasdigit)
        printf("Password has no digits\n");
    else if (!hasspecial)
        printf("Password has no special characters\n");
    else if (!hasupper)
        printf("Password has no uppercase letters\n");
    else if (!haslength)
        printf("Very short password\n");
    else
        printf("Password saved!\n");

    return 0;
}
