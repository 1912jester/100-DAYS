#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    
    // Read the string including spaces
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // Remove trailing newline if present
        int len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
        
        int is_new_word = 1; // Flag to check if we are at the beginning of a word
        
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ') {
                is_new_word = 1; // Next non-space character will be a new word
            } else if (is_new_word) {
                // Print the first character of the word (converted to uppercase for safety)
                printf("%c.", toupper(s[i]));
                is_new_word = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}