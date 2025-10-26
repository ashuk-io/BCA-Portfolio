#include<stdio.h>
typedef struct c
{
    int real;
    int imaginary;
}complex;

void display(complex c){
    printf("The complex number is %d + %di\n", c.real,c.imaginary);
}

int main(){
    complex carr[5];
    complex car[5];
    for (int i = 0 ; i < 5 ; i ++ )
    {
        printf("The real part (%d): \n");
        scanf("%d", &carr[i].real);
        printf("The imaginary part (%d): \n", i+1);
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }
    
    return 0;
}
