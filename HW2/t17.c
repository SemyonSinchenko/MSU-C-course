#include <stdio.h>


int main() {
    float sum = 1.0;
    int term = 2;
    int div1 = 3;
    float div2 = 3.0;
    int sign = 1;

    while (term / (div1 * div2) >= 0.001) {
        sum += sign * term / (div1 * div2);
        term += 2;
        div1 += 2;
        div2 *= 3.0;
        sign *= -1;
    }

    printf("%.3f", sum);
}
