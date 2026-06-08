#include <stdio.h>

int main()
{
    char s[150] = {};
    scanf("%[^\n]", s);

    int n = 0, k = 0;
    while (s[k] != '\0')
    {
        n++;
        k++;
    }

    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - 1 - i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
}
