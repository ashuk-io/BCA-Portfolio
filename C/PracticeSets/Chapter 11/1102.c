#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n  = 6;
    int *ptr;
    
    ptr = (int *)calloc(n,sizeof(int));
    
        for( int i = 0 ; i < 6 ; i++){
            printf("Enter integer %d in the array : \n", i+i);
            scanf("%d", &ptr[i]);
        }
        printf("{%d ,%d, %d, %d, %d, %d }", ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);
    
    return 0; 
}