#include<stdio.h>
#include<string.h>

typedef struct c
{
    int real;
    int imaginary;
}complex;

int main(){
    complex c = {4,3};
    printf("The value of complex number is %d + i%d", c.real, c.imaginary);
    return 0;
}
