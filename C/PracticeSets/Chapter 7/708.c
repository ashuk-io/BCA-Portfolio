#include <stdio.h>
int main(){
    int arr[3][10];
    int n1;
    int n2;
    int n3;
    printf("Enter 1st number for table : ");
    scanf("%d", &n1);
    printf("Enter 2nd number for table : ");
    scanf("%d", &n2);
    printf("Enter 3rd number for table : ");
    scanf("%d", &n3);
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = n1 * (i+1);
        printf("%d x %d = %d\n", n1, i+1, arr[0][i]);
    }
    for (int j = 0; j < 10; j++)
    {
        arr[1][j] = n2 * (j+1);
        printf("%d x %d = %d\n", n2, j+1, arr[1][j]);

    }
    for (int k = 0; k < 10; k++)
    {
        arr[2][k] = n3 * (k+1);
        printf("%d x %d = %d\n", n3, k+1, arr[2][k]);

    }
    
    
    return 0;
}