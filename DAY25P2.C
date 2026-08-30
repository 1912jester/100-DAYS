#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print remaining stars
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}