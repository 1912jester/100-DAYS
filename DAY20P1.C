#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;
    
    int product = 1;
    int odd_count = 0;
    
    // Handle 0 explicitly if needed, though product for 0 usually depends on requirements
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    
    int temp = num < 0 ? -num : num;
    
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            odd_count++;
        }
        temp /= 10;
    }
    
    if (odd_count == 0) {
        product = 1;
    }
    
    printf("%d\n", product);
    return 0;
}