#include<stdio.h>
#include<string.h>

int main() {
    // char str[] = "i m ashu";
    // for ( int i = 0 ; i < strlen(str) ; i++ ) {
    //     str[i] = str[i] + 1;
    // }
    char str[] = "Nz!obnf!jt!Btivupti!Lvnbs";
    for ( int i = 0 ; i < strlen(str) ; i++ ) {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    return 0;
}