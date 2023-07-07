#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int findLargestSquare(int matrix[][5], int rows, int cols) {
    int maxSquareSize = 0;
    int dp[rows][cols];

//first row is copied as it is 
    for (int i = 0; i < rows; i++) {
        dp[i][0] = matrix[i][0];
        if (dp[i][0] == 1)
            maxSquareSize = 1;
    }

    for (int j = 0; j < cols; j++) {
        dp[0][j] = matrix[0][j];
        if (dp[0][j] == 1)
            maxSquareSize = 1;
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
                if (dp[i][j] > maxSquareSize)
                    maxSquareSize = dp[i][j];
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return maxSquareSize;
}

int main() {
    int matrix[][5] = {
        {1, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 0, 1}
    };

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int largestSquare = findLargestSquare(matrix, rows, cols);
    printf("Largest square submatrix consisting of only 1s: %d\n", largestSquare);

    return 0;
}
