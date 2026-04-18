#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    if (a == (int)a) {
        printf("int %.0f", a);
    } else {
        printf("float %d %.3f", (int)a, a - (int)a);
    }

    return 0;
}