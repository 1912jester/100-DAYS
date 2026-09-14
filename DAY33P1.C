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
        
        int target;
        // Read the target element to search
        if (scanf("%d", &target) == 1) {
            int left = 0;
            int right = n - 1;
            int found_index = -1;
            
            // Binary search algorithm
            while (left <= right) {
                int mid = left + (right - left) / 2;
                
                if (arr[mid] == target) {
                    found_index = mid;
                    break;
                } else if (arr[mid] < target) {
                    left = mid + 1; // Target is in the right half
                } else {
                    right = mid - 1; // Target is in the left half
                }
            }
            
            // Print the result based on whether the element was found
            if (found_index != -1) {
                printf("Found at index %