#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, x;


    printf("Enter the number of domestic animals: ");
    scanf("%d", &n);

    //domestic animals array
    char domesticAnimals[n][100];

    printf("Enter the names of %d domestic animals:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    // wild animals
    printf("\nEnter the number of wild animals: ");
    scanf("%d", &x);

    // wild animals array
    char wildAnimals[x][100];

    printf("Enter the names of %d wild animals:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    char all[n + x][200];

    //domestic animals to All array
    for (int i = 0; i < n; i++) {
        strcpy(all[i], domesticAnimals[i]);
    }

    // wild animals to all array
    for (int i = 0; i < x; i++) {
        strcpy(all[n + i], wildAnimals[i]);
    }

    //Output
 for(int y=0;y<n+x;y++)
printf("%s ",all[y]);


    return 0;
}
