#include <stdio.h>

int count_negatives(int r[], int n){
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] > 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }

    int negatives = count_negatives(arr, 10);
    printf("Number of negative integers in the array are: %d\n", negatives);

    return 0;
}
