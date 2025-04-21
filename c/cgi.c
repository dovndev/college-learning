#include <stdio.h>
#include <stdlib.h>

int main() {
    // Print the required HTTP header
    printf("Content-type: text/html\n\n");

    // Start HTML output with CSS styling
    printf("<!DOCTYPE html>");
    printf("<html><head>");
    printf("<title>Styled CGI Page</title>");
    
    // CSS styles
    printf("<style>");
    printf("body { font-family: Arial, sans-serif; background-color: #f4f4f4; text-align: center; padding: 20px; }");
    printf("h1 { color: #333; }");
    printf(".container { background: white; padding: 20px; max-width: 400px; margin: auto; border-radius: 10px; box-shadow: 0px 0px 10px rgba(0,0,0,0.1); }");
    printf("</style>");

    printf("</head><body>");
    
    // Main content container
    printf("<div class='container'>");
    printf("<h1>Hello, CGI!</h1>");
    
    // Get environment variable (QUERY_STRING for GET requests)
    char *query = getenv("QUERY_STRING");
    if (query && query[0] != '\0') {
        printf("<p><strong>Query String:</strong> %s</p>", query);
    } else {
        printf("<p>No query string provided.</p>");
    }

    printf("</div>");
    printf("</body></html>\n");

    return 0;
}
