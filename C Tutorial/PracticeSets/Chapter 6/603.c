#include<stdio.h>
 int multiply(int*);
 int multiply(int* x){
    return *x * 10;
 }

 int main(){
    int i = 10;
    printf("Value of i before: %d\n", i);
    

    printf("Value of i after: %d\n", multiply(&i));

    return 0;
 }
 