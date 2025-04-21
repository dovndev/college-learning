#include <stdio.h>

void stringReverse(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = stringLength(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    stringReverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
