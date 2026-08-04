#include <stdio.h>

int main() {
    int length, breadth;
    
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
    
    return 0;
}