#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to initialize the restaurant website
void initWebsite() {
    printf("Initializing restaurant website...\n");
}

// Function to get the menu items
const char* getMenu() {
    return "1. Pizza\n2. Pasta\n3. Salad\n4. Dessert";
}

// Function to get restaurant information
const char* getAboutInfo() {
    return "Welcome to our restaurant! We serve delicious food made from the freshest ingredients.";
}

// Function to handle contact form submission
void submitContactForm(const char* name, const char* email, const char* message) {
    printf("Contact form submitted by %s (%s): %s\n", name, email, message);
}

// Main function
int main() {
    initWebsite();
    return 0;
}