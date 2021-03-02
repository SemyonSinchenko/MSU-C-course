#include <stdio.h>


int main() {
    int a, p;
    scanf("%d", &a);
    if (a < 0) {
        a = -a;
    }
    int n = a % 10;
    short f = 1;


    while (a > 9) {
        p = n;
        a /= 10;
        n = a % 10;

        if (p <= n) {
            f = 0;
        }
    }

    if (f == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}
