#include <stdio.h>

int main() // * Fibonacci series upto n.  //! Parini.
{
    int n, first, second, next;
    scanf("%d", &n);
    first = 0, second = 1;
    if (n < 2)
        printf("%d", first);
    else
        printf("%d %d ", first, second);
    for (int i = 3; i <= n; i++) //* term counter
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}