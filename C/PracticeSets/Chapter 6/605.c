#include<stdio.h>
 
int* sum(int a, int b){
    int sum = a+b;
    int* ptr = &sum;
    printf("The sum = %d\n",sum);
    return ptr;
}

float* avg(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("Mean = %f\n", avg);
    return ptr;
}



int main(){
    int x = 5 ; int y = 20;
    int* ptr1; float* ptr2;
    ptr1 = sum(x,y);
    ptr2 = avg(x,y);

    printf("The address of sum is %u and of avg is %u", ptr1, ptr2);
    
    return 0;
}