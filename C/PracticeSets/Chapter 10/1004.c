#include<stdio.h>

int main(){
    
    char name1[20];
    char name2[20];
    int salary1;
    int salary2;

    printf("Enter name of the 1st employee : \n");
    scanf("%s", name1);    
    printf("Enter name of the 2nd employee : \n");
    scanf("%s", name2);    
    printf("Enter salary of the 1st employee : \n");
    scanf("%d", &salary1);
    printf("Enter salary of the 2nd employee : \n");
    scanf("%d", &salary2);

    FILE* ptr = fopen("Employees.txt","w");
    fprintf(ptr,"%s, %d", name1, salary1);
    fprintf(ptr,"\n");
    fprintf(ptr,"%s, %d", name2, salary2);


    return 0;
    
}   