#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("ashu1.txt","r");
    if(ptr == NULL){
        printf("The file does not exist, Sorry!");
    }
    else{
        int num;
        fscanf(ptr,"%d",&num);
        printf("The value of num is %d\n", num);
        fscanf(ptr,"%d",&num);
        printf("The value of num is %d\n", num);

    }
    fclose(ptr);

    return 0;
}