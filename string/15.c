#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%[^\n]", s);
    int n = strlen(s), palindrome = 1;

    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
    {
        printf("%s\n", s);
        return 0;
    }

}
