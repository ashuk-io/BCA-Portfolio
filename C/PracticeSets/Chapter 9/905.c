#include<stdio.h>
#include<string.h>

typedef struct c
{
    int real;
    int imaginary;
}complex;

int main(){
    complex c = {1,2};
    printf("The value of complex number is %d + i%d", c.real, c.imaginary);
    return 0;
}
