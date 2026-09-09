#include <stdio.h>

int main() {
    int r, c;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        long long row_sums[100] = {0}; // Array to store the sum of each row
        
        // Read the matrix elements and calculate row sums simultaneously
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                row_sums[i] += mat[i][j];
            }
        }
        
        // Print the array containing row sums
        for (int i = 0; i < r; i++) {
            if (i > 0) printf(" ");
            printf("%lld", row_sums[i]);
        }
        printf("\n");
    }
    
    return 0;
}