#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    // Check for non-positive numbers if necessary, but assuming positive integers based on test cases
    if (n <= 0) {
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);
            if (i < n) {
                printf(" ");
            }
        }
    }
    printf("\n");
    
    return 0;
}