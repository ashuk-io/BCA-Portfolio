#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *ptr;
    int n = 7;

    ptr = (int *)calloc(10, sizeof(int));

    for(int i = 0 ; i < 10 ; i++){
        ptr[i] = 7*(i+1);
        // printf("%d\n", ptr[i]);
    }

   
    ptr = (int*)realloc(ptr, 15* sizeof(int));
    for (int i = 0 ; i<15 ; i++){
        ptr[i] = 7*(i+1);
        printf("%d\n", ptr[i]);
    }
    return 0;
}