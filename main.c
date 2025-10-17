#include <stdio.h>
#include "logic.h"

int main() {
    int num1 = 10;
    int num2 = 5;

    int arr[5] = {1,11,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    resize_arr(arr, size);
    
}