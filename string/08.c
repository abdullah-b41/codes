#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%s", s);
    int n = strlen(s), freqArr[26] = {};
    for (int i = 0; i < n; i++)
    {
        if (s[i] > 'Z')
            s[i] -= 32;
        freqArr[s[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freqArr[i] > 0)
            printf("%c: %d \n", i + 'A', freqArr[i]);
    }
}
