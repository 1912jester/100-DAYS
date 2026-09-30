#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // Possible answer
            high = mid - 1;  // Search for first occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}
