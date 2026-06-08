// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char in[100], out[100] = {};
//     int n, add = 0;
//     scanf("%i %s", &n, in);
//     for (int i = 0; i < n; i++)
//     {
//         out[i + add] = in[i];
//         out[i + add + 1] = in[i];
//         add++;
//     }
//     printf("%s\n", out);
// }
#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];
    int n;
    scanf("%i %s", &n, in);
    for (int i = 0; i < n; i++)
    {
        printf("%c%c", in[i], in[i]);
    }
}