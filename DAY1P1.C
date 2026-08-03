#include <stdio.h>

int main() {
    int num1, num2;
    
    if (scanf("%d %d", &num1, &num2) == 2) {
        printf("Sum = %d\n", num1 + num2);
    }
    
    return 0;
}