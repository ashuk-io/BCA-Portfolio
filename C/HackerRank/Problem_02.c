#include <stdio.h>

int main() 
{
    char c;
    char w[20];
    char s[30];

    printf("Enter a character : \n");
    scanf(" %c", &c);

    printf("Enter a word : \n");
    scanf("%19s", w);

    printf("Enter a Statement : \n");
    scanf(" %29[^\n]", s);

    printf("%c\n%s\n%s", c, w, s);
    return 0;
}