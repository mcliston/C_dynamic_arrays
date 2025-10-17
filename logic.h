#ifndef LOGIC_H
#define LOGIC_H

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} DynamicArr;

int resize_arr(int *arr, int size);

#endif