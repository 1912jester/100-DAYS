#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1 && n > 0) {
        int val;
        
        // Read the first element to initialize max and min
        scanf("%d", &val);
        int max = val;
        int min = val;
        
        // Read the remaining elements and update max/min
        for (int i = 1; i < n; i++) {
            scanf("%d", &val);
            if (val > max) {
                max = val;
            }
            if (val < min) {
                min = val;
            }
        }
        
        // Print the maximum and minimum elements
        printf("Max=%d, Min=%d\n", max, min);
    }
    
    return 0;
}