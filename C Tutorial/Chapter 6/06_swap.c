#include <stdio.h>

void swap(int *, int *);
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
