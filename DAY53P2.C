#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate total sum
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        // Right sum = total sum - left sum - current element
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  // Leftmost pivot index
        }

        leftSum += arr[i];
    }

    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}
