#include<stdio.h>
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[10];
};

void show( struct employee e);
void show( struct employee e){
    printf("Name: %s\n", e.name);
    printf("Code: %d\n", e.code);
    printf("Salary: %f\n", e.salary);
}

int main(){
    struct employee e1;
    e1.code = 69;
    e1.salary = 77000;
    strcpy(e1.name , "Ashu");
    show(e1);
    return 0;
}
