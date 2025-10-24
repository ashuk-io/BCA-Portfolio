#include<stdio.h>

int main(){
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    int* ptr = arr;
    printf("The first element of the array is : %d\n", arr[0]);
    printf("The address of the first element of the array is : %d\n", ptr);
    ptr = ptr + 2;
    printf("To we get the address of the 3rd element of the same array we can use ptr+2 : %d\n The element at the address : %d", ptr, *ptr);
    return 0;
}