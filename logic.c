#include "logic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int add(int a, int b) {
    return a + b;
}

int resize_arr(int *arr, int size) {
    int new_size = (size * 2);
    int local_original_arr[size];
    memcpy(local_original_arr, arr, size * sizeof(int));

    //make new array
    printf("New size of the array: %d\n", new_size);
    int *new_arr = (int *)malloc(new_size * sizeof(int));
    if (new_arr == NULL){
        perror("Failed to allocate new array");
        return 1;

    }

    memcpy(new_arr, arr, size * sizeof(int));

    for(int i=0; i<new_size; i++){
        printf("Element in new array: %d\n", new_arr[i]);
    }
    free(new_arr);
    return 0;
    }
