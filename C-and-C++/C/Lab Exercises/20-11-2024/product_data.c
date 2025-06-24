#include <stdio.h>
#include <string.h>

typedef struct {
    char productName[50];
    int productCode;
    float cost;
    int quantity;
} product;

int main() {
    FILE *file = fopen("products.txt", "r");
    product p[5];
    float totalValue = 0;
    int totalItems = 0;

    for (int i = 0; i < 5; i++) {
        fscanf(file, "%s %d %f %d", p[i].productName, &p[i].productCode, &p[i].cost, &p[i].quantity);
        totalValue += p[i].cost * p[i].quantity;
        totalItems += p[i].quantity;
    }
    fclose(file);

    printf("Total value: %.2f\n", totalValue);
    printf("Total items: %d\n", totalItems);

    char searchName[50];
    printf("Enter product name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < 5; i++) {
        if (strcmp(p[i].productName, searchName) == 0) {
            printf("Product Code: %d\n", p[i].productCode);
            break;
        }
    }

    return 0;
}

