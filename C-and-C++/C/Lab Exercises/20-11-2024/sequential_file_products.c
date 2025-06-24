#include <stdio.h>

typedef struct {
    char productName[50];
    int productCode;
    float cost;
    int quantity;
} product;

int main() {
    FILE *file = fopen("products.txt", "w");
    product p[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details of product %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", p[i].productName);
        printf("Code: ");
        scanf("%d", &p[i].productCode);
        printf("Cost: ");
        scanf("%f", &p[i].cost);
        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        fprintf(file, "%s %d %.2f %d\n", p[i].productName, p[i].productCode, p[i].cost, p[i].quantity);
    }

    fclose(file);
    return 0;
}

