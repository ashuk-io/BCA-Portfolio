#include<stdio.h>
 int multiply(int*);
 int multiply(int* x){
    *x =*x * 10;
    
 }

 int main(){
    int i = 10;
    printf("Value of i before: %d\n", i);
    multiply(&i);

    printf("Value of i after: %d\n", i);

    return 0;
 }
 