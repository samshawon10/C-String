#include <stdio.h>
#define SIZE 4

int main() {
    int i, j, mat[SIZE][SIZE] = {0};

    // Input for upper triangle
    printf("Enter elements for upper triangle:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++)
            scanf("%d", &mat[i][j]);
    }

    // Input for lower triangle
    printf("Enter elements for lower triangle:\n");
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++)
            scanf("%d", &mat[j][i]);
    }

    // Calculate sum of corresponding elements
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < i; j++)
            mat[i][j] += mat[j][i];
    }

    // Print the resulting matrix
    printf("Resulting matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
