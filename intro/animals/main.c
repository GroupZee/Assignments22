#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;

    // Input the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &n);

    // Allocate memory for the domestic animals array
    char domesticAnimals[n][50];

    printf("Enter the names of %d domestic animals:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    // Input the number of wild animals
    printf("\nEnter the number of wild animals: ");
    scanf("%d", &x);

    // Allocate memory for the wild animals array
    char wildAnimals[x][50];

    printf("Enter the names of %d wild animals:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    // Print all animals
    printf("\nThe complete list of animals (Domestic and Wild):\n");

    // Print domestic animals
    printf("Domestic Animals:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", domesticAnimals[i]);
    }

    // Print wild animals
    printf("Wild Animals:\n");
    for (int i = 0; i < x; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    return 0;
}
