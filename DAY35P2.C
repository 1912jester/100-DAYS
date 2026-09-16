#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        
        // Read the array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int k;
        // Read the number of positions to rotate
        if (scanf("%d", &k) == 1) {
            if (n > 0) {
                k = k % n;
                
                int first = 1;
                // Print the last k elements
                for (int i = n - k; i < n; i++) {
                    if (!first) printf(" ");
                    printf("%d", arr[i]);
                    first = 0;
                }
                
                // Print the first n - k elements
                for (int i = 0; i < n - k; i++) {
                    if (!first) printf(" ");
                    printf("%d", arr[i]);
                    first = 0;
                }
                printf("\n");
            }
        }
    }
    
    return 0;
}