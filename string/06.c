#include <stdio.h>

int main() //* Remove a char
{
    char s[101], c, c2;
    scanf("%[^\n] %c", s, &c);

    c2 = (c >= 'a' && c <= 'z' ? c - 32 : c + 32);

    int len = 0;
    int i = 0;
    while (s[i])
    {
        len++;
        i++;
    }

    int cnt = 0;
    for (int i = 0; s[i];)
    {
        if (s[i] == c || s[i] == c2)
        {
            for (int j = i; s[j + 1]; j++)
            {
                s[j] = s[j + 1];
            }
            cnt++;
        }
        else
            i++;
    }
    
    s[len - cnt] = '\0';
    printf("%s\n%d\n", s, len - cnt);
}