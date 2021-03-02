#include <stdio.h>


int main() {
    int m;
    scanf("%d", &m);

    if ((m <= 2) || (m == 12)) {
        printf("winter");
    } else if (m <= 5) {
        printf("spring");
    } else if (m <= 8) {
        printf("summer");
    } else {
        printf("autumn");
    }

    return 0;
}
