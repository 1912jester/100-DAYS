#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    // Convert to positive if numbers are negative
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // Euclidean algorithm for GCD/HCF
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("%d\n", a);
    
    return 0;
}