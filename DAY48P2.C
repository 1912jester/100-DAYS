#include <stdio.h>
#include <string.h>

// Function to reverse a specific portion of a string
void reverse_word(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[1000];
    
    // Read the string including spaces
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // Remove trailing newline if present
        int len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
        
        char *word_start = s;
        char *temp = s;
        
        // Iterate through the string
        while (*temp) {
            temp++;
            // If we reach a space, reverse the word we just passed
            if (*temp == ' ') {
                reverse_word(word_start, temp - 1);
                word_start = temp + 1;
            }
            // If we reach the end of the string, reverse the last word
            else if (*temp == '\0') {
                reverse_word(word_start, temp - 1);
            }
        }