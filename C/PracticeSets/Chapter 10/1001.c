#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ashu.txt", "r");

    int int1, int2, int3;
    fscanf(ptr, "%d %d %d", &int1,&int2,&int3);
    printf("%d %d %d", int1,int2,int3);

    return 0;
}
