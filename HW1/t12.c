#include <stdio.h>


int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        max = d;
    }

    if (e > max) {
        max = e;
    }
    
    int min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    if (d < min) {
        min = d;
    }

    if (e < min) {
        min = e;
    }

    printf("%d", max + min);

    return 0;
}
