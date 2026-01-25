#include <stdio.h>
#include <stdint.h>

int main () {

    int16_t array[] = {14, -5, 8, -17, 333, 42, -10, 8, -10};

    printf("{");
    for (int i=0; i<sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("}\n");
    
}

void CopyAndSort(int16_t* array) {
    
    
    return array;
}