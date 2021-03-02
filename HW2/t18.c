#include <stdio.h>


int main(int argc, char *argv[]) {
    float sum = 1.0;
    int term = 2;
    int div1 = 2;
    int pdiv1 = 1;
    float div2 = 3.0;
    int sign = 1;

    while (term / (div1 * div2) >= 0.001) {
        sum += sign * term / (div1 * div2);
        sign *= -1;
        term += 2;
        div1 += pdiv1;
        pdiv1 = div1 - pdiv1;
        div2 *= 3.0;
    }

    printf("%.3f", sum);
    
    return 0;
}
