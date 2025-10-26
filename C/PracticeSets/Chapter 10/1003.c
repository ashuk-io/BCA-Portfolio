#include <stdio.h>

int main()
{
    char ch;
    FILE* ptr;
    FILE* ptr2;
    ptr = fopen("ashu.txt", "r");
    ptr2 = fopen("ashu1.txt", "w");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch == EOF){   
            break;
        }
        else{
            
            fprintf(ptr2, "%c", ch); 
            fprintf(ptr2, "%c", ch); 
            printf("%c", ch);
        }
        
    }
    return 0;

}
    
