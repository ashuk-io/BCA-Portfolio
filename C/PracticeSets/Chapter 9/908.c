#include<stdio.h>
#include<string.h>

struct customer
{
    int CusID;
    
    char name[20];
    int mob;
    char bank[20];
    float balance;
};

int main(){
    struct customer c;
    strcpy(c.name,"Ashutosh Kumar");
    c.mob = 7777777777;
    c.CusID = 07070707;
    strcpy(c.bank , "HDFC Bank");
    c.balance = 2000000;
    // struct customer c = {07070707,"Ashutosh Kumar",7777777777,"HDFC Bank"};//This also means the same thing as the above statements
    
    return 0;
}

