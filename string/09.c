#include <stdio.h>
#include <string.h>

int main()
{
    char s[150] = {};
    scanf("%s", s);
    int n = strlen(s), repeat = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == s[i])
            {
                printf("%c", s[j]);
                repeat = 1;
                break;
            }
        }
        if (repeat)
            break;
    }
    if (!repeat)
        printf("No repeated character\n");
}
