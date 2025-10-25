#include<stdio.h>
#include<string.h>

char* slice(char st[],int m,int n){
    int i = 0 , count;
    char *ptr1 = &st[m];
    char *ptr2 = &st[n];
    st = ptr1;
    st[n] = '\0';
    return st;

}
int main(){
    char st[] = "Hello";
    
    printf("%s", slice(st,1,3));
    return 0;

}