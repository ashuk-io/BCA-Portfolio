#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    
    fclose(ptr);
    ptr = fopen("file.txt","w");
    
    fprintf(ptr,"%d",num*2);
    printf("%d\n",num*2);
    fclose(ptr);
    return 0;
}