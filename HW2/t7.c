#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (a > 0) {
        nums[a % 10] += 1;
        a /= 10;
    }

    short f = 0;
    for (a=0; a<10; a++) {
        if (nums[a] > 1) {
            f = 1;
        }
    }

    if (f == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}
