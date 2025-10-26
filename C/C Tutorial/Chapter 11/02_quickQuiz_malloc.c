#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 5;
    float *ptr;
    ptr = (float *)malloc(f * sizeof(float));
    
        ptr[0] = 2.3;
        ptr[1] = 3.45;
        ptr[2] = 3.14;
        ptr[3] = 7.99;
        ptr[4] = 5.25;
        printf("%.2f %.2f %.2f %.2f %.2f", ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    
    return 0; 
}