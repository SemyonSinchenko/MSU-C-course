#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);

    int sum = 1;
    sum *= a % 10;
    a /= 10;

    sum *= a % 10;
    a /= 10;

    sum *= a % 10;

    printf("%d", sum);
}
