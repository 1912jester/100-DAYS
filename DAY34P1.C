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
        
        int pos, val;
        // Read the position (0-based index) and the value to insert
        if (scanf("%d %d", &pos, &val) == 2) {
            // Shift elements to the right to make space for the new element
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            
            // Insert the value at the specified position
            arr[pos] = val;
            n++; // Increase the size of the array
            
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