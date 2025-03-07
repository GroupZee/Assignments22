#include <stdio.h>
#include <string.h>

int main() {
    int n, x, i;
    int valid = 1; // Flag to check if input is valid

    // Input the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of domestic animals.\n");
        return 1;
    }

    char domesticAnimals[n][50];

    printf("Enter the names of %d domestic animals (e.g., 'cow', 'goat'):\n", n);
    for (i = 0; i < n; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);

        // Validate if entered name is a known domestic animal
        if (strcmp(domesticAnimals[i], "cow") != 0 && strcmp(domesticAnimals[i], "goat") != 0 &&
            strcmp(domesticAnimals[i], "chicken") != 0 && strcmp(domesticAnimals[i], "sheep") != 0 &&
            strcmp(domesticAnimals[i], "dog") != 0 && strcmp(domesticAnimals[i], "cat") != 0) {
            valid = 0;
            printf("Invalid domestic animal name: %s\n", domesticAnimals[i]);
        }
    }

    if (!valid) {
        printf("Domestic animals input has errors. Exiting program.\n");
        return 1;
    }

    // Input the number of wild animals
    printf("\nEnter the number of wild animals: ");
    scanf("%d", &x);
    if (x <= 0) {
        printf("Invalid number of wild animals.\n");
        return 1;
    }

    char wildAnimals[x][50];

    printf("Enter the names of %d wild animals (e.g., 'lion', 'tiger'):\n", x);
    for (i = 0; i < x; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);

        // Validate if entered name is a known wild animal
        if (strcmp(wildAnimals[i], "lion") != 0 && strcmp(wildAnimals[i], "tiger") != 0 &&
            strcmp(wildAnimals[i], "elephant") != 0 && strcmp(wildAnimals[i], "leopard") != 0 &&
            strcmp(wildAnimals[i], "zebra") != 0 && strcmp(wildAnimals[i], "giraffe") != 0) {
            valid = 0;
            printf("Invalid wild animal name: %s\n", wildAnimals[i]);
        }
    }

    if (!valid) {
        printf("Wild animals input has errors. Exiting program.\n");
        return 1;
    }

    // Print all valid animals
    printf("\nThe complete list of animals (Domestic and Wild):\n");

    printf("Domestic Animals:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", domesticAnimals[i]);
    }

    printf("Wild Animals:\n");
    for (i = 0; i < x; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    return 0;
}
