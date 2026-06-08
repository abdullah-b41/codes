#include <stdio.h>

int main()
{
    char s[100] = {}, out[100] = {};
    scanf("%[^\n]", s);
    int i = 0, idx = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if (s[i] > 'Z')
            {
                out[idx++] = s[i] - 32;
            }
            else
            {
                out[idx++] = s[i] + 32;
            }
        }
        i++;
    }
    printf("%s\n", out);
}
