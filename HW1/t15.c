#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);

    int max;
    max = a % 10;
    a /= 10;

    if (a % 10 > max) {
        max = a % 10;
    }
    a /= 10;

    if (a % 10 > max) {
        max = a % 10;
    }

    printf("%d", max);
}
