#include <stdio.h>

#define PI 3.14159265

int main() {
    double radius;
    
    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        double circumference = 2 * PI * radius;
        
        // Note: The sample test case 1 output for Circumference (43.96) seems to be calculated 
        // using 3.14, while the rest are calculated using a more precise Pi. 
        // This standard mathematical implementation uses a precise Pi.
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
    
    return 0;
}