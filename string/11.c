#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {}, s2[150] = {};
    scanf("%[^\n]", s);
    getchar();
    scanf("%[^\n]", s2);

    int n = strlen(s), m = strlen(s2);
    int freq[100] = {}, freq2[100] = {};

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

    for (int i = 0; i < m; i++)
    {
        if ((s2[i] >= 'A' && s2[i] <= 'Z') ||
            (s2[i] >= 'a' && s2[i] <= 'z'))
        {
            if (s2[i] < 'a')
                s2[i] += 32;

            freq2[s2[i] - 'a']++;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        if (freq[i] != freq2[i])
        {
            printf("They are not anagrams\n");
            return 0;
        }
    }
    printf("They are anagrams\n");
}
