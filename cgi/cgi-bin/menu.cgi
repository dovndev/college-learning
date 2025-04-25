#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Content-Type: text/html\n\n");

    // Read the query string
    char *query = getenv("QUERY_STRING");
    if (!query) {
        printf("<h1>Error: No data received</h1>");
        return 1;
    }

    // Parse the query string
    int pizza = 0, burger = 0, drink = 0;
    sscanf(query, "pizza=%d&burger=%d&drink=%d", &pizza, &burger, &drink);

    // Calculate total cost
    int total = (pizza * 10) + (burger * 8) + (drink * 3);

    // Display the result
    printf("<h1>Order Summary</h1>");
    printf("<p>Pizza: %d x $10</p>", pizza);
    printf("<p>Burger: %d x $8</p>", burger);
    printf("<p>Drink: %d x $3</p>", drink);
    printf("<h2>Total Cost: $%d</h2>", total);

    return 0;
}