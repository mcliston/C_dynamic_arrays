#ifndef DYNAM_ARRAY_H
#define DYNAM_ARRAY_H

typedef struct DynamArr{
    int *data;
    int size;
    //methods
    void (*resize)(struct DynamArr *self, int size);
} DynamArr;

void resize_arr(DynamArr *arr, int size);

#endif