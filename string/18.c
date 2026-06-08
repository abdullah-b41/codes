#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {}, vowels[150] = {};
    scanf("%[^\n]", s);
    int n = strlen(s), vidx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels[vidx++] = s[i];
            s[i] = '*';
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '*')
        {
            s[i] = vowels[--vidx];
        }
    }
    printf("%s\n", s);
}
