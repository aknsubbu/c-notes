#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  
        }
        start++;
        end--;
    }
    return 1; 
}

char* longestPalindrome(char *str) {
    int len = strlen(str);
    int maxLength = 1;  
    int start = 0;     
    int i, j;

    for (i = 0; i < len - 1; i++) {
        if (str[i] == str[i + 1]) {
            start = i;
            maxLength = 2;
        }
    }

    for (i = 3; i <= len; i++) {
        for (j = 0; j < len - i + 1; j++) {
            int end = j + i - 1;
            if (str[j] == str[end] && isPalindrome(str, j + 1, end - 1)) {
                start = j;
                maxLength = i;
            }
        }
    }

    char *result = malloc((maxLength + 1) * sizeof(char));
    strncpy(result, str + start, maxLength);
    result[maxLength] = '\0';

    return result;
}

// Example usage
int main() {
    char str[] = "";
    char *result = longestPalindrome(str);
    printf("Longest palindrome : %s\n", result);
    free(result);  
    return 0;
}
