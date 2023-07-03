//1
// Write a recursive function to calculate the power of a given number (x^n), where both x and n are
// integers.
#include "stdio.h"
// x is the base value and n is the number to which x is supposed to be raised
int power(int x,int n){
    if (n==0){
        return 1;
    }
    return x*power(x,n-1);
}

//2
// Implement a function that accepts a string and returns a dynamically allocated array of characters
// containing the unique characters in the string, sorted in ascending order.
char * uniquesort(const char* str){
    int len=strlen(str);
    char * uniquechars=(char*)malloc((len+1)*sizeof(char));
    int uniqueindex=0;
    for(int i=0;i<len;i++){
        char currentchar=str[i];
        int found=0;
        for(int j=0;j<uniqueindex;j++){
            if (uniquechars[j]==currentchar){
                found=1;
                break;
            }
        }
        if (found==0){
            uniquechars[uniqueindex]=currentchar;
            uniqueindex++;
        }

    }
    for(int i=0;i<uniqueindex;i++){
        for(int j=i+1;j<uniqueindex;j++){
            if (uniquechars[i]>uniquechars[j]){
                char temp=uniquechars[i];
                uniquechars[i]=uniquechars[j];
                uniquechars[j]=temp;
            }
        }
    }
    uniquechars[uniqueindex]='\0';
    return uniquechars;

}

//3
// Write a function that accepts a two-dimensional array of integers and returns the transpose of the
// array (rows become columns and vice versa).
void transpose(int matrix[][3], int rows, int cols, int result[][4]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
//4
// Write a function that accepts a string and returns the longest palindrome substring in the string.

//5
//Implement a recursive function to solve the Tower of Hanoi problem with n disks, given three
// towers
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from tower %c to tower %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from tower %c to tower %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

//9
// Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
// clockwise in-place

void rotateArray(int (*arr)[3], int size) {
    // Transpose the matrix
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse each row
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

//10
// Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
// the average value of each column, storing the results in a dynamically allocated 1D array. The
// function should return a pointer to the resulting array.
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