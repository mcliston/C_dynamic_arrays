#include "dynam_array.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void resize_arr(DynamArr *arr, int size){
    int new_size = (size *2);
    int local_orig_arr[size];
    memcpy(local_orig_arr, arr, size * sizeof(int));

    //make new array
    int *new_arr = (int *)malloc(new_size * sizeof(int));
    if (new_arr == NULL){
        perror("Failed to allocate new array");
    }

    memcpy(new_arr, arr, size * sizeof(int));
}