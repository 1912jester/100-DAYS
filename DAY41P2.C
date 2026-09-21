#include <stdio.h>

int main() {
    char s[1000];
    
    // Read string including spaces
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // Remove trailing newline if present
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '\n') {
                s[i] = '\0';
                break;
            }
            i++;
        }
        
        // Print each character on a new line
        i = 0;
        while (s[i] != '\0') {
            printf("%c\n", s[i]);
            i++;
        }
    }
    
    return 0;
}