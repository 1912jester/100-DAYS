#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    int last[256];

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    int left = 0, maxLength = 0;

    for (int right = 0; right < n; right++) {
        unsigned char ch = s[right];

        if (ch == '\n')
            break;

        if (last[ch] >= left) {
            left = last[ch] + 1;
        }

        last[ch] = right;

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}