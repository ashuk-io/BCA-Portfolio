#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n  = 5 ;
    int *ptr;
    
    ptr = (int *) malloc (n * sizeof(int));
    
        ptr[0] = 34;
        ptr[1] = 77;
        ptr[2] = 21;
        ptr[3] = 69;
        
        
        printf("%d %d %d %d \n", ptr[0],ptr[1],ptr[2],ptr[3]);
        ptr = (int*) realloc(ptr,3 * sizeof(int));
        
        
    return 0; 
}