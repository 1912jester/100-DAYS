#include <stdio.h>
#include <math.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;
    
    if (num >= 0 && num <= 9) {
        printf("%d\n", num);
        return 0;
    }
    
    int temp = num;
    int last_digit = num % 10;
    int digits = 0;
    
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    int first_digit = temp;
    
    int divisor = (int)pow(10, digits);
    int middle_part = (num % divisor) / 10;
    
    int swapped_num = last_digit * divisor + middle_part * 10 + first_digit;
    
    printf("%d\n", swapped_num);
    return 0;
}