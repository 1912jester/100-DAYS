#include <stdio.h>

int main() {
    int r, c;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        
        // Read the matrix elements
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        
        // Print the transposed matrix
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                if (i > 0) printf(" ");
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}