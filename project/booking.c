#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Simple URL decoder
void decode(char *src, char *dest) {
    while (*src) {
        if (*src == '+') {
            *dest++ = ' ';
            src++;
        } else if (*src == '%' && isxdigit(src[1]) && isxdigit(src[2])) {
            int val;
            sscanf(src + 1, "%2x", &val);
            *dest++ = val;
            src += 3;
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

    if (len <= 0) {
        printf("<p>No data received.</p>");
        return 1;
    }

    char data[1024], name[100] = "", date[50] = "", seats[10] = "";
    fread(data, 1, len, stdin);

    char *pair = strtok(data, "&");
    while (pair) {
        if (strncmp(pair, "name=", 5) == 0) {
            decode(pair + 5, name);
        } else if (strncmp(pair, "date=", 5) == 0) {
            decode(pair + 5, date);
        } else if (strncmp(pair, "seats=", 6) == 0) {
            decode(pair + 6, seats);
        }
        pair = strtok(NULL, "&");
    }

    // Output confirmation
    printf("<h2>Booking Confirmed!</h2>");
    printf("<p>Name: %s</p>", name);
    printf("<p>Date: %s</p>", date);
    printf("<p>Seats: %s</p>", seats);
    printf("<p>✅ Thank you! Your booking is complete.</p>");
    printf("<p>🧾 Receipt #: #%d</p>", rand() % 90000 + 10000);

    return 0;
}
