// Write a function that accepts a two-dimensional array of integers and returns the transpose of the
// array (rows become columns and vice versa).
#include <stdio.h>

#define ROWS 3
#define COLS 4
void transposeArray(int matrix[ROWS][COLS]) {
    int i, j;
    int transposed[COLS][ROWS];

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printf("Transposed Array:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    transposeArray(matrix);
    return 0;
}
