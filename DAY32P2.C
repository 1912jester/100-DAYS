#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    // Read the number as a string to handle potentially large inputs
    if (scanf("%s", s) == 1) {
        int freq[10] = {0};
        
        // Count the frequency of each digit
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                freq[s[i] - '0']++;
            }
        }
        
        int max_freq = 0;
        int most_frequent_digit = -1;
        
        // Find the digit with the maximum frequency
        // Iterating from 0 to 9 ensures that in case of a tie, 
        // the smallest digit is selected.
        for (int i = 0; i < 10; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                most_frequent_digit = i;
            }
        }
        
        if (most_frequent_digit != -1) {
            printf("%d\n", most_frequent_digit);
        }
    }
    
    return 0;
}