#include<stdio.h>
int factorial(int);

int factorial(int n ){
    if(n == 0 || n == 1) return 1;
    else return factorial(n-1)*n;
}

int main() {
    int n;
    printf("Enter a number for its factorial: \n");
    scanf("%d", &n);
    printf("The facotial of %d : %d",n,factorial(n) );

    return 0;
}