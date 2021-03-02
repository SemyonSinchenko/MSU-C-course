#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    int p, n;
    n = a % 10;
    short f = 0;

    while (a > 9) {
        p = n;
        a /= 10;
        n = a % 10;
        if (p == n) {
            f = 1;
        }
    }

    if (f == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}
