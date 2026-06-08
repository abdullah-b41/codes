#include <stdio.h>
#include <string.h>

int main() //* Remove last k chars
{
    char s[101];
    int k;
    scanf("%[^\n] %d", s, &k);
    int n = strlen(s);
    s[n - k] = '\0';
    printf("%s\n", s);
}