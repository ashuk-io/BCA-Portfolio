#include <stdio.h>
int main()
{
    int i = 13;   // Declare an integer variable i and assign it the value 13
    int *x = &i;  // Declare a pointer x that stores the address of i
    int **y = &x; // Declare a pointer to a pointer y that stores the address of x

    // Print the value of i
    printf("The value of i is %d\n", i);

    // Print the address of i using &i
    printf("The address of i is %p\n", (void *)&i);

    // Print the value stored at address x (which is i), using *x
    printf("The value at address x (i) is %d\n", *x);

    // Print the value stored at address y (which is x), using *y
    printf("The value at address y (x) is %p\n", (void *)*y);

    // Print the addresses of the pointer variables themselves
    // &x is the address where the pointer x is stored
    // &y is the address where the pointer y is stored
    printf("The address of pointer variable x (&x) is %p\n", (void *)&x);
    printf("The address of pointer variable y (&y) is %p\n", (void *)&y);

    // Print the value at the address pointed to by the pointer stored at y (which is i), using **y
    printf("The value at address pointed by y (i) is %d\n", **y);
    

    return 0;
}