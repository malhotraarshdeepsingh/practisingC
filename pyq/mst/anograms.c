#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, count1[256] = {0}, count2[256] = {0};
    int len1 = 0, len2 = 0, flag = 1;

    // Input strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Calculate length of str1
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    // Calculate length of str2
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    // Check if lengths are different
    if (len1 != len2) {
        flag = 0;
    } else {
        // Count frequency of each character in str1
        for (i = 0; i < len1; i++) {
            // Convert to lowercase manually
            if (str1[i] >= 'A' && str1[i] <= 'Z') {
                count1[str1[i] + 32]++;
            } else {
                count1[str1[i]]++;
            }
        }

        // Count frequency of each character in str2
        for (i = 0; i < len2; i++) {
            // Convert to lowercase manually
            if (str2[i] >= 'A' && str2[i] <= 'Z') {
                count2[str2[i] + 32]++;
            } else {
                count2[str2[i]]++;
            }
        }

        // Compare frequency of characters
        for (i = 0; i < 256; i++) {
            if (count1[i] != count2[i]) {
                flag = 0;
                break;
            }
        }
    }

    // Print the result
    if (flag == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}