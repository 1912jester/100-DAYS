#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int temp = n;
        int num_digits = 0;
        int sum = 0;
        
        // Count number of digits
        while (temp > 0) {
            num_digits++;
            temp /= 10;
        }
        
        temp = n;
        
        // Calculate sum of digits raised to the power of num_digits
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (int i = 0; i < num_digits; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        
        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}