// Write a function that accepts a pointer to a string and removes all the vowels from the string,
// modifying it in-place.
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    if (str == NULL) {
        return;
    }

    int len = strlen(str);
    int i, j;

    for (i = 0, j = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}
