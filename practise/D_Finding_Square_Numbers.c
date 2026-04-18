#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a; i++)
    {
        int c = i*i;
        if(c>=b && c<=a)
        {
            printf ("%d ", c);
        }
    }
}