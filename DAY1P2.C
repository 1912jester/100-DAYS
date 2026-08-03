#include <stdio.h>

int main() {
    int num1, num2;
    
    if (scanf("%d %d", &num1, &num2) == 2) {
        if (num2 != 0) {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
                   num1 + num2, num1 - num2, num1 * num2, num1 / num2);
        }
    }
    
    return 0;
}