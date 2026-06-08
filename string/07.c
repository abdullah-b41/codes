#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%s", s);
    int n = strlen(s), vowel = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            s[n - vowel] = '\0';
        }
        else
            i++;
    }
    if (strlen(s) == 0)
    {
        printf("(Empty)");
    }
    else
        printf("%s", s);
}
