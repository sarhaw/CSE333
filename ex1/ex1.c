//UW CSE333 Exercise 1

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void CopyAndSort();
void printArray();

int main () {
    int16_t arr[] = {14, -5, 8, -17, 333, 42, -10, 8, -10};
    int16_t arrayLength = sizeof(arr) / sizeof(arr[0]);
    int16_t sortedArray[arrayLength];

    printf("Array before sorting: ");
    printArray(arr, arrayLength);
    
    CopyAndSort(arr, sortedArray, arrayLength);

    printf("Array after sorting: ");
    printArray(sortedArray, arrayLength);
    
    return EXIT_SUCCESS;
}

void CopyAndSort(int16_t arr[], int16_t sortedArray[], int arrayLength) {
    sortedArray[0] = arr[0];
    for (int i=1; i<arrayLength; i++) {
        int16_t curr = arr[i];
        int16_t index = i;
        while (curr < sortedArray[index-1] && index >=1) {
            sortedArray[index] = sortedArray[index-1];
            index--;
        }
        sortedArray[index] = curr;
    }
}

void printArray(int16_t* array, int arrayLength) {
    printf("{");
    for (int i=0; i<arrayLength-1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d}\n", array[arrayLength-1]);
}