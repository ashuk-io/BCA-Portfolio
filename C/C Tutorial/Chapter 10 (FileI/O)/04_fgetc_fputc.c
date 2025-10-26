#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("ashu.txt", "a");
    // char c = fgetc(fptr);
    // fgetc(ptr)       //used to read a character from fptr
    // printf("%c",c);
    fputc('c',fptr);    //used to write a character 'c' in fptr
    fclose(fptr);
    return 0;
}