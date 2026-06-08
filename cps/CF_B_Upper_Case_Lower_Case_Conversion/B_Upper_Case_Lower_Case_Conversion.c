#include <stdio.h>

int main(void)
{
    char x;
    scanf("%c", &x);
    int y = (int)x;
    if(y >= 65 && y <= 90)
    {
        printf("%c", (char)(y+32));
    }
    else if(y >= 92 && y <= 122)
    {
        printf("%c", (char)(y-32));
    }
    else
    {
        printf("Not an alphabet");
    }
}