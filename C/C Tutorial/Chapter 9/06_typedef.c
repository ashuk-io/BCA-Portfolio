#include<stdio.h>
#include<string.h>

typedef struct employee 
{
    int code;
    float salary;
    char name[10];
}emp;

int main(){
    // typedef int ashu;
    // ashu a = 34;
    // printf("The value of a is %d", a);
    // typedef struct employeee emp; //This can be done here also
    emp e1;
    emp* ptr1 = &e1;  
    e1.code = 69;
    e1.salary = 45000.50;
    strcpy(e1.name, "Ashu");
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);

    return 0 ;

}