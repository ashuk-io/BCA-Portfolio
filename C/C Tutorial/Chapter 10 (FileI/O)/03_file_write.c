#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("ashu.txt", "a");  //w clears the file 1st then begins writing 
    int num =432;
    fprintf(fptr,"%d", num);
    fclose(fptr);

    return 0;
}