#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to print headers
void print_headers() {
    printf("Content-type: text/html\n\n");
}

int main() {
    // Print the HTTP headers
    print_headers();

    // Get form data from the query string (CGI form submission)
    char *data;
    data = getenv("QUERY_STRING");

    if (data != NULL) {
        // Process the contact form
        char name[100], email[100], message[500];

        // Simulating the data extraction from the form (in real case, use a more secure approach)
        sscanf(data, "name=%s&email=%s&message=%s", name, email, message);

        // Output a response
        printf("<html><body>");
        printf("<h2>Thank you for your message!</h2>");
        printf("<p>Name: %s</p>", name);
        printf("<p>Email: %s</p>", email);
        printf("<p>Message: %s</p>", message);
        printf("</body></html>");
    } else {
        printf("<html><body><h2>Error: No data received.</h2></body></html>");
    }

    return 0;
}
