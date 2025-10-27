#include<stdio.h>
#include<string.h>

int main(){
    char c[] = "madam";
    int len, i;
    len = strlen(c);
    for (i = 0; i < len/2; i++){
        if (c[i] != c[len - i - 1]){
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("It is a palindrome");
    return 0;
}
