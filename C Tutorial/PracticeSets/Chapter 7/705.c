#include<stdio.h>

void reverseArr(int a[]) {
    int n = 10;
    for ( int i = 0 ; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

void printArr(int a[], int n) {
    for ( int i = 0 ; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}

int main() {
    int arr[] = {5,10,15,20,25,30,35,40,45,50};
    printArr(arr,10);

    reverseArr(arr);
    printArr(arr,10);
    return 0;
}