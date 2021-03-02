#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);

    int f = 1;

    while (a > 0) {
        if (a % 10 % 2 == 1) {
            f = 0;
        }
        a /= 10;
    }

    if (f == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}
