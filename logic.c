#include "logic.h"
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

void resize_arr(int *arr) {
    int size = sizeof(*arr) / sizeof(arr[0]);
    printf(" %d", size);
}