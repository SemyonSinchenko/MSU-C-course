#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float res = (float) (a + b + c) / 3;
    printf("%.2f", res);
    return 0;
}
