#include<stdio.h>

int main() {
    int s[3] = {1,2,3};
    printf("%d\n", *(s+3));
    printf("%d", s[1]);

    return 0;
}