#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    int num = 0;

    while (a > 0) {
        if (a % 10 == 9) {
            num += 1;
        }
        a /= 10;
    }

    if (num == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}
