#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int temp_sum = *a + *b;
    
    int temp_diff = abs(*a - *b);
    
    *a = temp_sum;
    *b = temp_diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}