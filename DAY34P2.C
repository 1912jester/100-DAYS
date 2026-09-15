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
        
        int pos;
        // Read the position (0-based index) to delete
        if (scanf("%d", &pos) == 1) {
            // Ensure the position is within valid bounds
            if (pos >= 0 && pos < n) {
                // Shift elements to the left to overwrite the deleted element
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--; // Decrease the size of the array
            }
            
            // Print the updated array
            for (int i = 0; i < n; i++) {
                if (i > 0) printf(" ");
                printf("%d", arr[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}