#include <stdio.h>


int main() {
    int i = 0;
    int tmp_;
    while (1 > 0) {
        scanf("%d", &tmp_);
        if (tmp_ == 0) {
            break;
        } else {
            i++;
        }
    }

    printf("%d", i);
}
