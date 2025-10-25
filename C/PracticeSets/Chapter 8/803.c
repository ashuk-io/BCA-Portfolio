#include<stdio.h>
#include<string.h>

char len(char st[]){
    char i = 0;
    int count;
    char c = st[i];
    while(c!='\0'){
        c = st[i];
        i++;
    }
    count = i-1;
    return count;

}
int main(){
    char st[] = "Hello";
    
    printf("%d", len(st));
    return 0;

}