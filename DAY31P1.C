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
        
        int target;
        // Read the target element to search
        if (scanf("%d", &target) == 1) {
            int found_index = -1;
            
            // Linear search algorithm
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    found_index = i;
                    break;
                }
            }
            
            // Print the result based on whether the element was found
            if (found_index != -1) {
                printf("Found at index %d\n", found_index);
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}