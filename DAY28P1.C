#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0; // 1 and below are not prime
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a factor, so it's not prime
        }
    }
    return 1; // No factors found, it is prime
}

int main() {
    int n;
    
    // Read the upper limit
    if (scanf("%d", &n) == 1) {
        int first = 1;
        
        // Iterate through all numbers from 2 to n
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                if (!first) {
                    printf(" ");
                }
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}