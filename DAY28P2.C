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
        
        // Print the array elements
        for (int i = 0; i < n; i++) {
            if (i > 0) printf(" ");
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}