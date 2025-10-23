#include<stdio.h>
int main() {
    int n;
    
    int arr[10];
    printf("Enter a table to print its Table : ");
    scanf("%d", &n);
    for (int i = 0 ; i<10 ; i++)
    {
        arr[i] = n * (i+1);
    }
    for ( int j = 0 ; j <= 10; j++)
    {
        printf("%d x %d = %d\n",n, j, n*j);
    }
    return 0;
}