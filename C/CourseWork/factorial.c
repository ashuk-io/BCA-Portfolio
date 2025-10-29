#include<stdio.h>

int main(){
    int n;
    int product = 0;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        i++;
        product = product + i*(i-1);
    }
    printf("The factorial is = %d", product);
    return 0;
}