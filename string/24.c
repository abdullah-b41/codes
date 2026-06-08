#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {}, s_[100] = {};
    scanf("%[^\n]", s);
    getchar();
    scanf("%[^\n]", s_);
    int n = strlen(s), m = strlen(s_);
    if (m == 0)
    {
        printf("YES\n");
        return 0;
    }
    int prev = 0;
    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = prev; j < n; j++)
        {
            if (s[j] == s_[i])
            {
                found = 1;
                if (j < prev)
                {
                    printf("NO\n");
                    return 0;
                }
                else
                {
                    prev = j;
                    break;
                }
            }
        }
        if (!found)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
