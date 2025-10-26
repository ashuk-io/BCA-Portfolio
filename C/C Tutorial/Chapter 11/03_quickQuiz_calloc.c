#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));
    
        ptr[0] = 34;
        ptr[1] = 77;
        ptr[2] = 21;
        ptr[3] = 69;
        
        printf("%d %d %d %d ", ptr[0],ptr[1],ptr[2],ptr[3]);
    
    return 0; 
}