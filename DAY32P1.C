#include <stdio.h>

int main() {
    int n1, n2;
    
    // Read the first array
    if (scanf("%d", &n1) == 1) {
        int arr1[1000];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &arr1[i]);
        }
        
        // Read the second array
        if (scanf("%d", &n2) == 1) {
            int arr2[1000];
            for (int i = 0; i < n2; i++) {
                scanf("%d", &arr2[i]);
            }
            
            int merged[2000];
            
            // Copy elements from the first array
            for (int i = 0; i < n1; i++) {
                merged[i] = arr1[i];
            }
            
            // Copy elements from the second array
            for (int i = 0; i < n2; i++) {
                merged[n1 + i] = arr2[i];
            }
            
            // Print the merged array
            for (int i = 0; i < n1 + n2; i++) {
                if (i > 0) printf(" ");
                printf("%d", merged[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}