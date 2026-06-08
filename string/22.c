#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {}, digitString[100] = {}, alphaString[100] = {};
    scanf("%s", s);
    int n = strlen(s);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            digitString[x++] = s[i];
        else
            alphaString[y++] = s[i];
    }
    digitString[x] = '\0';
    alphaString[y] = '\0';
    printf("Digit String is %s\nAlpha String is %s\n", digitString, alphaString);
}
