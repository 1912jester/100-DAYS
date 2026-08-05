#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Swapping logic using a third variable
        temp = num1;
        num1 = num2;
        num2 = temp;
        
        printf("After swap: %d %d\n", num1, num2);
    }
    
    return 0;
}