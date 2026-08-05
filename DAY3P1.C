#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    
    if (scanf("%lf", &celsius) == 1) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Fahrenheit=%g\n", fahrenheit);
    }
    
    return 0;
}