#include<stdio.h>
#include<string.h> 

struct employee 
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee ashu = {100 , 150.0 , "Ashu"};
    printf("%d %f %s", ashu.code , ashu.salary , ashu.name);
    return 0;
}