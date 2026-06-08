#include <stdio.h>
#include <string.h>

int main()
{
    int s, e;
    scanf("%d %d", &s, &e);
    char str[100000];
    scanf("%s", str);
    int n = strlen(str);

    for (int i=(s-1), j=(e-1); i<j; i++, j--)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    printf("%s", str);
}