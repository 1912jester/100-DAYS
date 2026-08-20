#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int reversed = 0;
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        printf("%d\n", reversed);
    }
    return 0;
}