#include<stdio.h>
// CHAPTER 4

//                                    01
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for (int i=0; i<=10; i++)
//     {
//         printf("%d x %d = %d\n", n, i, n*i);
//     }
    //     return 0;
//}


//                                    02
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     for (int i=10; i>=0; i--)
//     {
//         printf("%d x %d = %d\n", n, i, n*i);
//     }
    //     return 0;
// }


//                                    03
// int main(){
//     int i = 0;
//     do{
//         i++;
//         printf("Hello world\n");
//     }while(i<=5);
//     return 0;
// }

//                                    05
// int main()
// {
//     int n = 1;
//     int sum = 0;
//     while(n<=10){
//         sum += n;
//         n++;
//     }
//     printf("Sum of numbers = %d", sum );
//     return 0;
// }

//                                    06
// int main()
// {
//     int n = 1;
//     int sum = 0;
//     do
//     {
//         sum += n;
//         n++;
//     }while(n<=10);
//     printf("Sum of numbers using WHIKE LOOP = %d", sum );
//     return 0;
//     int n = 1;
//     int sum = 0;
//     for(n; n<=10; n++)
//     {
//         sum += n;
//     }
//     printf("Sum of the first ten numbers using FOR LOOP = %d", sum);
//     return 0 ;
// }

//                                    07
// int main()
// {
//     int i;
//     int n = 8;
//     int sum = 0;
//     for (i=0; i<=10; i++){
//         printf("%d x %d = %d\n", n, i, i*n);
//         sum += i*n;
//     }
//     printf("The sum is = %d", sum);
//     return 0;
// }

//                                     08 (For loop)
// int main(){
//     int n;
//     int product = 0;
//     printf("Enter a number to find its factorial : ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         product = product + i*n;
//     }
//     printf("The factorial is = %d", product);
//     return 0;
// }


//                                    09 (While lop)
// int main(){
//     int n;
//     int product = 0;
//     printf("Enter a number to find its factorial : ");
//     scanf("%d", &n);
//     int i=1;
//     while(i<=n){
//         i++;
//         product = product + i*n;
//     }
//     printf("The factorial is = %d", product);
//     return 0;
// }

//                                     10
// int main(){
//     int n;
//     printf("Enter a number to check whether it is prime or not : \n");
//     scanf("%d", &n);
//     int prime = 0;
//     int i;
//     if(n==0 || n==1){
//         prime = 1;
//     }
//     for(i = 2; i <=n; i++);
//     {
//         if(n % i==0){
//             prime = 1;
//         }
//     }
//     if(prime){
//         printf("The number is not prime\n");
//     }
//     else{
//         printf("The number is prime\n");
//     }
//     return 0;
// }

