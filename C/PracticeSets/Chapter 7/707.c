#include <stdio.h>

//MY LOGIC :
// int table3(int n){
//     printf("3 x %d = %d\n", n, 3*n);
    

// }

// int table7(int n){
//     printf("7 x %d = %d\n", n, 7*n);
    
// }
// int table9(int n){
//     printf("9 x %d = %d\n", n, 9*n);
    
// }

// int main(){
//     int arr[3][10] = {{table3(1), table3(2), table3(3), table3(4), table3(5), table3(6), table3(7), table3(8), table3(9), table3(10)},
//                      {table7(1), table7(2), table7(3), table7(4), table7(5), table7(6), table7(7), table7(8), table7(9), table7(10)},
//                      {table9(1), table9(2), table9(3), table9(4), table9(5), table9(6), table9(7), table9(8), table9(9), table9(10)}};
//     return 0;

// }


//OPTIMAL LOGIC :

// int main(){
//     int arr[3][10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[0][i] = 3 * (i+1);
//         printf("3 x %d = %d\n", i+1, arr[0][i]);

//     }
//     for (int j = 0; j < 10; j++)
//     {
//         arr[1][j] = 7 * (j+1);
//         printf("7 x %d = %d\n", j+1, arr[1][j]);

//     }
//     for (int k = 0; k < 10; k++)
//     {
//         arr[2][k] = 9 * (k+1);
//         printf("9 x %d = %d\n", k+1, arr[2][k]);

//     }
    
    
//     return 0;
// }

//Another Method ;

int main(){
    int arr[3][10];
    int mul[] = {3, 7, 9};
    for (int i = 0; i < 3; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            arr[i][j] = mul[i] * (j+1);
            printf("%d x %d = %d\n", mul[i], j+1, arr[i][j]);
    }

    }
    return 0;

}

