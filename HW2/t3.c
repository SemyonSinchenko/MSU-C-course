#include <stdio.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    for (; a<=b; a++) {
        sum += a * a;
    }

    printf("%d", sum);
}
