#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2.0 * i - 1.0;
            double denominator = 2.0 * i;
            sum += numerator / denominator;
        }
    }
    
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}