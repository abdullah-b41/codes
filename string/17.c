#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%[^\n]", s);
    int n = strlen(s);
    s[0] >= 'a' ? s[0] -= 32 : s[0];
    for (int i = 1; i < n; ++i)
    {
        if (s[i - 1] == ' ')
        {
            if (s[i] >= 'a')
                s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    printf("%s\n", s);
}
