#include<stdio.h>
#include<string.h>

int main(){
    char st[6];
    printf("Enter string 1 of 5 characters : \n");
    scanf("%s", st);
    printf("%s",st);
    char st1[6];
    
    for(int i = 0 ; i < 5 ; i++){
        scanf("%c", &st1[i]);
        fflush(stdin);
    }
    st1[5] = '\0';
    printf("%s\n",st1);
    return 0;

}