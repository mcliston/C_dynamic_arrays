#include "dynam_array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DynamArr create_dynam_arr() {
    DynamArr d;
    int arr[6] = {1,11,12,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    d.size = size;
    d.data = (int *)malloc(size*sizeof(int));
    if (d.data == NULL){
        perror("Failed to allocate new array.");
    }

    memcpy(d.data, arr, sizeof(arr));
    
    d.resize = resize_arr;
    return d;
}

int main() {
    DynamArr dr = create_dynam_arr();

    for(int i=0; i<6; i++){
        printf("Elements before expansion: %d\n", dr.data[i]);
    }
    printf("The size of the array is %d\n", dr.size);

}