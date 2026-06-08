#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%[^\n]", s);
    int n = strlen(s);
    int freq[26] = {};

    for (int i = 0; i < n; ++i)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i] < 'a')
                s[i] += 32;

            freq[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            printf("It is not pangram\n");
            return 0;
        }
    }
    printf("It is pangram\n");
}
