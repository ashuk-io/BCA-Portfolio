#include<stdio.h>
#include<string.h>

int main(){
    char c = 'b';
    int count = 0;
    char str[] = "Nz!obnf!jt!Btivupti!Lvnbs";
    for ( int i = 0 ; i < strlen(str) ; i++ ) {
        if(str[i] == c){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}