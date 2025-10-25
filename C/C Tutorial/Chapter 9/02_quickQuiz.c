#include<stdio.h>   
#include<string.h>

struct employee 
{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter details of employee 1:\n");
    scanf("%s", e1.name);
    scanf("%d", &e1.code);
    scanf("%f", &e1.salary);

    printf("Enter details of employee 2:\n");
    scanf("%s", e2.name);
    scanf("%d", &e2.code);
    scanf("%f", &e2.salary);

    printf("Enter details of employee 3:\n");
    scanf("%s", e3.name);
    scanf("%d", &e3.code);
    scanf("%f", &e3.salary);

    return 0;
}