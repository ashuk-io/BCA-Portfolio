#include<stdio.h>
int main() {
    int data[5] = {45,72,29,90,61};
    int max = data[0];
    for (int i = 1; i<5, i++;){
        if(data[1] > max) {
            max = data[1];
            
        }
    }
    printf("Maximum = %d", max);
        return 0;
}