#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%[^\n]", s);
    int n = strlen(s), words = 1;
    for (int i = 1; i < n; ++i)
    {
        if (s[i - 1] != ' ' && s[i] == ' ')
            words++;
    }
    printf("%d\n", words);
}
