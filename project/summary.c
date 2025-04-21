#include <stdio.h>
#include <string.h>

int main() {
    char category[50], date[20], note[100];
    float amount;
    FILE *file = fopen("data/expenses.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%s,%f,%s,%s", category, &amount, date, note) != EOF) {
        printf("%s: %.2f\n", category, amount); // Display by category
    }

    fclose(file);
    return 0;
}
