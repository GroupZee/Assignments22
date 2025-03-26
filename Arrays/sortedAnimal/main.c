
#include <stdio.h>
#include <string.h>
#define nn 7
int n, x, i;
char domesticAnimals[nn][50];
char wildAnimals[nn][50];
char all[nn*2][200];
void sort(char arr[][150],int size);

int main() {

    int valid = 1; // Flag to check if input is valid

    // Input the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &n);
    if (n <= 0 || n>=nn) {
        printf("Invalid number of domestic animals.\n");
        return 1;
    }



    printf("Enter the names of %d domestic animals:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d. ", i + 1);
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
    if (x <= 0 ||x>=nn) {
        printf("Invalid number of wild animals.\n");
        return 1;
    }



    printf("Enter the names of %d wild animals:\n", x);
    for (i = 0; i < x; i++) {
        printf("%d. ", i + 1);
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



    //domestic animals to All array
    for (int i = 0; i < n; i++) {
        strcpy(all[i], domesticAnimals[i]);
    }

    // wild animals to all array
    for (int i = 0; i < x; i++) {
        strcpy(all[n + i], wildAnimals[i]);
    }
printf("\n\n");
    //Output
 for(int y=0;y<n+x;y++){
printf("%s ",all[y]);
 }
 printf("\n");
sort(all,n+x);
for(i=0;i<n+x;i++){
printf("%s ",all[i]);
}
    return 0;
}
void sort(char arr[][150], int size) {
    // Simple bubble sort for demonstration purposes
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[150];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
