#include<stdio.h>

int fibonacci(int );

int fibonacci(int n ){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    int n;
    printf("Ente the nth element : \n");
    scanf("%d", &n);
    printf("The fibonacci at %d element is : %d", n, fibonacci(n));

    return 0;
}