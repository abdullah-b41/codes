#include <stdio.h>

int main() //* a^b
{
    int a, b, prod = 1;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++)
    {
        prod *= a;
    }
    printf("%d", prod);
    return 0;
}