#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        int even_count = 0;
        int odd_count = 0;
        
        // Read the array elements and count even/odd
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        // Print the counts
        printf("Even=%d, Odd=%d\n", even_count, odd_count);
    }
    
    return 0;
}