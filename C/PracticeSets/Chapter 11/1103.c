#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n  = 6;
    int *ptr;
    
    ptr = (int *)calloc(n,sizeof(int));
    
        ptr[0] = 34;
        ptr[1] = 77;
        ptr[2] = 21;
        ptr[3] = 69;
        ptr[4] = 35;
        ptr[5] = 18;
        
        printf("%d %d %d %d %d %d ", ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);
    
    return 0; 
}