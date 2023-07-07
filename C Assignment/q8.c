#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int* array1, int size1, int* array2, int size2) {
    int* mergedArray = (int*)malloc((size1 + size2) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (array1[i] < array2[j]) {
            mergedArray[k++] = array1[i++];
        } else {
            mergedArray[k++] = array2[j++];
        }
    }

    while (i < size1) {
        mergedArray[k++] = array1[i++];
    }

    while (j < size2) {
        mergedArray[k++] = array2[j++];
    }

    free(array1);
    free(array2);

    return mergedArray;
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int* array1 = (int*)malloc(size1 * sizeof(int));
    printf("Enter elements of the first array in ascending order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int* array2 = (int*)malloc(size2 * sizeof(int));
    printf("Enter elements of the second array in ascending order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

    int* mergedArray = mergeArrays(array1, size1, array2, size2);

    printf("\nMerged Array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    free(mergedArray);

    return 0;
}
