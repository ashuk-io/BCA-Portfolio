#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number range  : ");
    scanf("%d", &n);
    do
    {
        printf("The value of i is %d \n", i);
        i++;

    } while (i <= 4);
}
