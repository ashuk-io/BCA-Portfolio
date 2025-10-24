#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char st[] = "Hello";
    char st1[] = " Biro";
    printf("%d\n", strlen(st));

    
    char st2[10];
    strcpy(st2,st);
    printf("%s\n",st2);
    
    
    strcat(st,st1);
    printf("%s\n", st);

    printf("st1 = %s, st2 = %s\n", st1,st2);
    int a = strcmp(st1,st2);
    int b = strcmp(st2,st1);
    printf("%d\n", a);
    printf("%d\n", b);
return 0;

}