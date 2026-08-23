#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;
    
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num && num > 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}