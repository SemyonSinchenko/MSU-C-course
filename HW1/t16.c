#include <stdio.h>


int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    float a, b;

    a =  (float) (y2 - y1) / (x2 - x1);
    b = y1 - a * x1;

    printf("%.2f %.2f", a, b);
}
