#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int a[100][100];

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
