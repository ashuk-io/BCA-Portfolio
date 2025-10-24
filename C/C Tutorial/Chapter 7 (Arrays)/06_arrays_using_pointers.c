#include<stdio.h>
int main(){
    int marks[] = {34,23,54,76};
    int* ptr = &marks[0];
    // printf("%u", ptr);
    // int* ptr = marks; //same as int* ptr = &marks[0];

        for(int i = 0; i<4; i++)
        {
            // printf("The marks at %d is %d\n",i, &marks[i]);
            printf("The marks at %d is %d\n",i, *ptr);
            ptr++;
        }
        
    return 0;
}