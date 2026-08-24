#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;
    
    int temp = num;
    int sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    
    if (sum == num && num > 0) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}