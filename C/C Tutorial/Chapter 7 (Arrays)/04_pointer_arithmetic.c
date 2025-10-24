#include<stdio.h>

int main(){
    //POINTER ARITHMETIC USING INTEGER
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n", ptr);
    // ptr++  ;
    // printf("The value of ptr is %u\n", ptr);

    //POINTER ARITHMETIC USING CHARACTER POINTER
    int a = 10;
    int* ptr = &a;
    int b = 5;
    int* ptr2 = &b;
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);
    
    printf("The address of b is %u\n", ptr2);
    printf("Sum of pointers = %d", (ptr-ptr2));
    
    return 0;

}