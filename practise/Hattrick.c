#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);
    while (n--) {
        char a, b, c, d, e, f;
        scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

        int hat = (a=='W' && b=='W' && c=='W') ||
                  (b=='W' && c=='W' && d=='W') ||
                  (c=='W' && d=='W' && e=='W') ||
                  (d=='W' && e=='W' && f=='W');

        printf("%s\n", hat ? "Yes" : "No");
    }
    return 0;
}