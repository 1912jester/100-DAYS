#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000];
    char s2[1000];
    
    if (scanf("%s", s1) == 1 && scanf("%s", s2) == 1) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        
        if (len1 != len2) {
            printf("Not rotation\n");
            return 0;
        }
        
        // Create a temporary string to hold s1 + s1
        char temp[2000];
        strcpy(temp, s1);
        strcat(temp, s1);
        
        // Check if s2 is a substring of the concatenated string
        if (strstr(temp, s2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }
    
    return 0;
}