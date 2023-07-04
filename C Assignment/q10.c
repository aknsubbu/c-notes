// Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
// the average value of each column, storing the results in a dynamically allocated 1D array. The
// function should return a pointer to the resulting array.
#include <stdio.h>

float* calculateColumnAverages(float (*arr)[3], int rows, int cols) {
    float* averages = (float*)malloc(cols * sizeof(float)); // Allocate memory for the result array

    for (int j = 0; j < cols; j++) {
        float sum = 0.0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        averages[j] = sum / rows;
    }

    return averages;
}

void printarray(float* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main(){
    float arr[3][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}, 
        {7.0, 8.0, 9.0}
    };
    float* averages = calculateColumnAverages(arr, 3, 3);
    printarray(averages, 3);
    free(averages);
    return 0;
}