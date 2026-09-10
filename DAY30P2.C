#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        int pos_count = 0;
        int neg_count = 0;
        int zero_count = 0;
        
        // Read the array elements and count positive, negative, and zeros
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > 0) {
                pos_count++;
            } else if (arr[i] < 0) {
                neg_count++;
            } else {
                zero_count++;
            }
        }
        
        // Print the counts
        printf("Positive=%d, Negative=%d, Zero=%d\n", pos_count, neg_count, zero_count);
    }
    
    return 0;
}