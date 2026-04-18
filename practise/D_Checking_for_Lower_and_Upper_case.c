#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int d = (int)c;
    if(d>=65 && d<=90)
    {
    printf("Upper case");
    }
    else 
    {
        printf("Lower case");
    }
    return 0;
}