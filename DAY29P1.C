#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1) {
        int val;
        long long sum = 0;
        
        // Read the array elements and add them to sum
        for (int i = 0; i < n; i++) {
            scanf("%d", &val);
            sum += val;
        }
        
        // Print the sum
        printf("%lld\n", sum);
    }
    
    return 0;
}