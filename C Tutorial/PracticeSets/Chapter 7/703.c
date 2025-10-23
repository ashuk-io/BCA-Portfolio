#include<stdio.h>

//MY CODE ON 1ST ATTEMPT
// int table(int);int table(int a){
//     return 5*a;
// }
// int main(){
//     int arr[10] = {table(1), table(2), table(3), table(4), table(5), table(6), table(7), table(8), table(9), table(10)};
    
    
//     printf("%d", arr[0]);
    
//     return 0;
// }

//MY CODE ON 2ndT ATTEMPT
// int table(int a){
//     printf("5 x %d = %d\n", a,5*a);
// }
// int main(){
//     int arr[10] = {table(1), table(2), table(3), table(4), table(5), table(6), table(7), table(8), table(9), table(10)};
//     return 0;
// }

// Other ways:
int main() {
    int arr[10];
    for (int i = 0 ; i<10 ; i++)
    {
        arr[i] = 5 * (i+1);
    }
    for ( int j = 0 ; j < 10; j++)
    {
        printf("5 x %d = %d\n", j, 5*j);
    }
    return 0;
}