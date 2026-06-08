#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%s", s);
    int n = strlen(s), duplicate = 0, freq[100] = {};

    // for (int i = 0; i + 1 < n; i++)
    // {
    //     for (int j = i + 1; j + 1 < n; j++)
    //     {
    //         if (s[j] == s[i])
    //         {
    //             for (int k = j; k < n - 1; ++k)
    //             {
    //                 s[k] = s[k + 1];
    //             }
    //             duplicate++;
    //         }
    //     }
    //     s[n - duplicate] = '\0';
    // }
    for (int i = 0; i < n; ++i)
    {
        freq[s[i] - 'A']++;
    }

    for (int i = 0; i < n; ++i)
    {
        if (freq[s[i] - 'A'] > 0)
        {
            printf("%c", s[i]);
            freq[s[i] - 'A'] = 0;
        }
    }
    printf("\n");
}
