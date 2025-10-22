#include<stdio.h>

int main(){
    int marks [5]; // this reserves space to store 90 integers
    printf("Ente marks of 5 students : ") ;
    for( int i = 0; i<5 ; i++){
        scanf("%d", &marks[i]); 
    }
    for( int i = 0; i<5 ; i++){
        printf("The marks at index %d is %d\n",i, marks[i]); 
    }
    printf("Marks 0 and marks 1 is %d %d\n",marks[0], marks[1]);


    return 0;
}