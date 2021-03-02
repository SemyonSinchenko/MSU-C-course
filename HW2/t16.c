#include <stdio.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    int r = b;

    while (a % b > 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("%d", r);
}
