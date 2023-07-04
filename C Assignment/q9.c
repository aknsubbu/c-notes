// Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
// clockwise in-place

#include <stdio.h>
void rotateArray(int (*arr)[3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
//reverse
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][size - 1 - j];
            arr[i][size - 1 - j] = temp;
        }
    }
}

void printArray(int (*arr)[3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    printf("Original Array:\n");
    printArray(arr, 3);
    rotateArray(arr, 3);
    printf("Rotated Array:\n");
    printArray(arr, 3);
    return 0;
}