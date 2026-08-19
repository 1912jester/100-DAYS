#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = n * n;
        printf("%d\n", sum);
    }
    return 0;
}