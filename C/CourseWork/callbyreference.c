#include<stdio.h>

void swap(int* a, int *b){
    int *temp = a;
    *a=*b;
    *b=*temp;
}

int main(){
        int m = 22, n = 44;
        
        printf("Values before swap: m = %d, n = %d\n", m,n);
        swap(&m,&n);
        printf("Values after swap: m = %d, n = %d\n", m,n);

    return 0;
}