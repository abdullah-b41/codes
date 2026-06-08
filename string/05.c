#include <stdio.h>
#include <string.h>

int main() //* Character frequency count
{
    char s[101], c, c2;
    scanf("%[^\n] %c", s, &c);
    int i = 0, cnt = 0;

    //* Clever
    c2 = (c >= 'a' && c <= 'z' ? c - 32 : c + 32);

    while (s[i])
    {
        //* Bruteforce
        // if (c >= 'a' && c <= 'z')
        // {
        //     if (s[i] >= 'A' && s[i] <= 'Z')
        //         s[i] += 32;
        //     if (s[i] == c)
        //         cnt++;
        // }
        // else
        // {
        //     if (s[i] >= 'a' && s[i] <= 'z')
        //         s[i] -= 32;
        //     if (s[i] == c)
        //         cnt++;
        // }
        //* Clever
        if (s[i] == c || s[i] == c2)
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
}