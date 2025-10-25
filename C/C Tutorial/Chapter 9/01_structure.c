#include<stdio.h>
#include<string.h>
struct employee 
{
    int code;
    float salary;
    char name[10];
}; //semicolon is necessary here



int main(){
    struct employee e1,e2;
    e1.code = 101;
    strcpy(e1.name, "Ashu");
    e2.salary = 54.44;

    printf("%d %f %s", e1.code, e2.salary, e1.name);

    return 0;
}