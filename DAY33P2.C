#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        
        // Read the sorted array elements
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int val;
        // Read the element to insert
        if (scanf("%d", &val) == 1) {
            int i = n - 1;
            
            // Shift elements to the right until we find the correct position
            while (i >= 0 && arr[i] > val) {
                arr[i + 1] = arr[i];
                i--;
            }
            
            // Insert the new element at the found position
            arr[i + 1] = val;
            n++; // Increase the size of the array
            
            // Print the updated array
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%d", arr[j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}