#include<stdio.h>
 
int cal(int,int);
int cal(int a, int b){
    printf("The sum = %d\n", a+b);
    printf("Mean of the two numbers = %d\n", (a+b)/2);

}

int main(){
    int x = 5 ; int y = 20;
    cal(x,y);
    return 0;
}