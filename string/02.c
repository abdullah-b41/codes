#include <stdio.h>

int main() //* vowel counter
{
    char s[101];
    scanf("%[^\n]", s);
    int cnt = 0, i = 0;
    while (s[i])
    {
        //* Bruteforce
        // if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' ||
        //     s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        //     cnt++;
        //* Method 2
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
}