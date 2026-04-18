#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", c+1);

    printf("%c", c-32); // 4
    
    printf("%c", c+32); // 5

    printf("%d", c);  // 6
}