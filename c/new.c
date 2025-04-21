#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int wordCount = countWords(input);
    printf("Number of words: %d\n", wordCount);

    return 0;
}