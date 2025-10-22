#include <stdio.h>
int variable(int* ptr){
    printf("The value of ptr is %d ",ptr);
    printf("The value at ptr is %d ",*ptr);
    return 5;

}

int main()
{
    int i = 10;
    int* ptr = &i;
    printf("Address of i is: %u\n", &i);
    variable(ptr);

    
    
    return 0;
}