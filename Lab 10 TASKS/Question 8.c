#include <stdio.h>

int main() {
    char *categories[3] = {"Appetizers", "Main Course", "Desserts"};
    char *items[3][3] = {
        {"Spring Rolls", "Garlic Bread", "Soup"},
        {"Grilled Chicken", "Pasta Alfredo", "Veggie Burger"},
        {"Ice Cream", "Brownie", "Fruit Salad"}
    };
    float prices[3][3] = {
        {5.99, 4.50, 6.25},
        {12.99, 14.50, 9.75},
        {3.99, 5.50, 7.25}
    };

    printf("========= RESTAURANT MENU =========\n\n");

    for (int c = 0; c < 3; c++) {
        printf("%s:\n", categories[c]);
        for (int i = 0; i < 3; i++) {
            printf("  %s - $%.2f\n", items[c][i], prices[c][i]);
        }
        printf("\n");
    }

    printf("=== BUDGET-FRIENDLY ITEMS (< $10) ===\n\n");

    for (int c = 0; c < 3; c++) {
        for (int i = 0; i < 3; i++) {
            if (prices[c][i] < 10.0) {
                printf("%s - $%.2f (%s)\n", items[c][i], prices[c][i], categories[c]);
            }
        }
    }

    return 0;
}
