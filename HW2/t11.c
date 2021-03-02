#include <stdio.h>


int main() {
    int a, i;
    i = -1;
    int numbers[10];
    scanf("%d", &a);

    while (a > 0) { 
        numbers[++i] = a % 10;
        a /= 10;
    }

    int new_num = 0;
    int pow = 1;

    while (i >= 0) {
        new_num += numbers[i] * pow;
        pow *= 10;
        i--;
    }


    printf("%d", new_num);
}
