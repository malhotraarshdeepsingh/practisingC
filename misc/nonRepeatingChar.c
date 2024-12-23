#include <stdio.h>
#include <string.h>

char nonRepeatingChar(char s[]) {
    int n = strlen(s);

    for (int i = 0; i < n; ++i) {
        int found = 0;

        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0)
            return s[i];
    }

    return '$';
}

int main() {
    char s[] = "racecar";
  
    printf("%c", nonRepeatingChar(s));
    return 0;
}