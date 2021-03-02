#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    if ((a >= 100) && (a <= 999)) {
        printf("YES");
    } else {
        printf("NO");
    }
}
