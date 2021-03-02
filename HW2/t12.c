#include <stdio.h>


int main() {
    int a, max_, min_;
    max_ = -1;
    min_ = 9;
    scanf("%d", &a);
    int tmp_;

    if (a == 0) {
        min_ = 0;
        max_ = 0;
    }

    while (a > 0) {
        tmp_ = a % 10;

        if (tmp_ > max_) {
            max_ = tmp_;
        }

        if (tmp_ < min_) {
            min_ = tmp_;
        }

        a /= 10;
    }

    printf("%d %d", min_, max_);
}
