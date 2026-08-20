#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}