// #include<stdio.h>

// int square(int x);
// int square(int x){
//     printf("The square of the  number is : %d", x*x);
// }

// int main(){
//     int n;
//     printf("Enter a number for its square; \n");
//     scanf("%d", &n);
    
//     square(n);
//     return 0;
// }


// #include<stdio.h>

// int max(int x, int y);
// int max(int x , int y){
//     x>y?printf("%d is greater than %d",x,y):printf("%d is greater than %d",y,x);
// }

// int main(){
//     int x ;
//     int y ;
//     printf("Enter value of x : \n"); 
//     scanf("%d", &x);
//     printf("Enter value of y : \n");
//     scanf("%d", &y);

//     max(x,y);
    

//     return 0;
// }

#include<stdio.h>

int sum(int x, int y);
int sum(int x , int y){
    printf("The sum of the numbers is %d", x+y);
}
int main(){
    int x ;
    int y ;
    printf("Enter value of x : \n"); 
    scanf("%d", &x);
    printf("Enter value of y : \n");
    scanf("%d", &y);
    sum(x,y);
    return 0 ; 
}


