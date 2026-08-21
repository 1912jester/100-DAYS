#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int reversed = 0;
        int temp = n;
        
        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        
        if (original == reversed) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}