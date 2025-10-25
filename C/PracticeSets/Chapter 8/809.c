#include<stdio.h>
#include<string.h>

int main(){
    char c = 'b';
    int count = 0;
    char str[] = "Nz!obnf!jt!Btivupti!Lvnbs";
    for ( int i = 0 ; i < strlen(str) ; i++ ) {
        if(str[i] == c){
            count = 1;
            break;  
        }
    }
    if(count){
        printf("Yes it contains that character\n");
    }
    else{
        printf("No it does not contain that character\n");
    }
    return 0;
}