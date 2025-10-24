#include<stdio.h>
int main() {
    int cgpa[3] = {3,5,4};
    for( int i = 0; i<3 ; i++){
        printf("The marks at index %d is %d\n",i, cgpa[i]); 
    }
    return 0;

}