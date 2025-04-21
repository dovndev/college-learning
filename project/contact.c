#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void url_decode(char *src, char *dest) {
    char a, b;
    while (*src) {
        if ((*src == '%') &&
            ((a = src[1]) && (b = src[2])) &&
            (isxdigit(a) && isxdigit(b))) {
            if (a >= 'a') a -= 'a' - 'A';
            if (a >= 'A') a -= ('A' - 10); else a -= '0';
            if (b >= 'a') b -= 'a' - 'A';
            if (b >= 'A') b -= ('A' - 10); else b -= '0';
            *dest++ = 16 * a + b;
            src += 3;
        } else if (*src == '+') {
            *dest++ = ' ';
            src++;
        } else {
            *dest++ = *src++;
        }
    }
    *dest = '\0';
}

int main() {
    char *len_str = getenv("CONTENT_LENGTH");
    int len = len_str ? atoi(len_str) : 0;

    printf("Content-Type: text/html\n\n");

    if (len == 0) {
        printf("<p>No data received.</p>");
        return 1;
    }

    char data[1024];
    fread(data, 1, len, stdin);

    char name[256] = "", email[256] = "", message[512] = "";

    char *token = strtok(data, "&");
    while (token) {
        if (strncmp(token, "name=", 5) == 0) {
            url_decode(token + 5, name);
        } else if (strncmp(token, "email=", 6) == 0) {
            url_decode(token + 6, email);
        } else if (strncmp(token, "message=", 8) == 0) {
            url_decode(token + 8, message);
        }
        token = strtok(NULL, "&");
    }

    printf("Thank you, %s!", name);
    printf("<p><strong>Email:</strong> %s</p>", email);
    printf("<p><strong>Message:</strong> %s</p>", message);

    return 0;
}
