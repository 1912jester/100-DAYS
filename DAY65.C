#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    
    // Read the two strings
    if (scanf("%s %s", s, t) == 2) {
        int len1 = strlen(s);
        int len2 = strlen(t);
        
        // If lengths are different, they cannot be anagrams
        if (len1 != len2) {
            printf("Not Anagram\n");
            return 0;
        }
        
        // Array to store the frequency of each lowercase letter
        int count[26] = {0};
        
        // Increment frequency for string s, decrement for string t
        for (int i = 0; i < len1; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        // Check if all character frequencies balance out to 0
        int is_anagram = 1;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
        
        if (is_anagram) {
            printf("Anagram\n");
        } else {
            printf("Not Anagram\n");
        }
    }
    
    return 0;
}