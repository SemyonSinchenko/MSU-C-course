#include <stdio.h>


int main() {
    int a;
    int even, odd;
    even = 0;
    odd = 0;

    scanf("%d", &a);
    if (a == 0) {
        even = 1;
    }

    while (a > 0) {
        if ((a % 10) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        a /= 10;
    }

    printf("%d %d", even, odd);
}
