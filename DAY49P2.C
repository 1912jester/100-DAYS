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
            len--; // Update length after removing newline
        }
        
        // Find the index of the last space to identify the surname
        int last_space_index = -1;
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                last_space_index = i;
                break;
            }
        }
        
        // If there's no space, it's just one name; print it as is
        if (last_space_index == -1) {
            printf("%s\n", s);
        } else {
            int is_new_word = 1;
            
            // Loop until the last space to print initials
            for (int i = 0; i < last_space_index; i++) {
                if (s[i] == ' ') {
                    is_new_word = 1;
                } else if (is_new_word) {
                    printf("%c.", toupper(s[i]));
                    is_new_word = 0;
                }
            }
            
            // Print a space followed by the surname
            printf(" %s\n", &s[last_space_index + 1]);
        }
    }
    
    return 0;
}