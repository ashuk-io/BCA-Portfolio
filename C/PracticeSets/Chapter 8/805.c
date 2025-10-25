#include<stdio.h>
int len(char st[]){
    int i = 0, count;
    char c = st[i];
    while (c != '\0') {
        c = st[i];
        i++;
    }
    count = i-1;
    return count;
}
void copy(char target[] , char source[]){
    
    for(int i = 0 ; i < len(source) ; i++){
        target[i] = source[i];
    }
    target[len(source)] = '\0';
}
int main(){
    char source[] = "ashu";
    char target[10];
    copy(target, source); // target now contains "ashu"
    printf("%s %s", source, target);

    return 0;
}
