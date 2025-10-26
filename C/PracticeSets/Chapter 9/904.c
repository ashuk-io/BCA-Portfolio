#include<stdio.h.>
#include<string.h>

typedef struct student
{
    char name[10];
    int roll;
    float marks;
}student;

int main(){
    student s1 = {"Ashu", 69, 99.9};
    student* ptr = &s1;

    printf("%s %d %f\n", s1.name, s1.roll, s1.marks);
    printf("%s %d %f\n", ptr->name, ptr->roll, ptr->marks);
}