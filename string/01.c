#include <stdio.h>

int main() //* Lowercase counter
{
    char s[101];
    scanf("%[^\n]", s);
    int cnt = 0, i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
}