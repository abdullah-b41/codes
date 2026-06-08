#include <stdio.h>

int main() //* Standard writing
{
    char s[101];
    scanf("%[^\n]", s);
    int i = 0;
    while (s[i])
    {
        if (i == 0 && s[i] >= 'a')
            s[i] = s[i] - 32;
        else if (s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
    printf("%s\n", s);
}