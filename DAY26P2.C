#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int num_groups = 5;
    
    for (int i = 0; i < num_groups; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i < num_groups - 1) {
            printf("\n");
        }
    }
    
    return 0;
}