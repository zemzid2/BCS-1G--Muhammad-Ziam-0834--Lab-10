#include <stdio.h>
#include <string.h>

int main() {
    char string[200];
    int countVowel = 0, countConsonant = 0, countDigit = 0, countSpaces = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int length = strlen(string);

    for (int i = 0; i < length; i++) {
        char ch = string[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= '0' && ch <= '9') {
            countDigit++;
        } else if (ch == ' ') {
            countSpaces++;
        } else if ((ch >= 'a' && ch <= 'z')) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                countVowel++;
            else
                countConsonant++;
        }
    }

    printf("\nVowels: %d", countVowel);
    printf("\nConsonants: %d", countConsonant);
    printf("\nDigits: %d", countDigit);
    printf("\nSpaces: %d", countSpaces);
    printf("\nTotal characters: %d\n", length);

    return 0;
}
