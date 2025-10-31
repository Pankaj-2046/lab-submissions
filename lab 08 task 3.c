#include <stdio.h>

int main() {
    float sales[4][5];
    float totalSalesman[4] = {0};
    float totalProduct[5] = {0};
    
    float maxProduct = 0.0;
    int topSalesman = 0;
    int topProduct = 0;
    
    int i, j;

    printf("Enter sales data (4 Salesmen x 5 Products):\n");
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Salesman %d, Product %d: ", i + 1, j + 1);
            scanf("%f", &sales[i][j]);

            totalSalesman[i] = totalSalesman[i] + sales[i][j];
            totalProduct[j] = totalProduct[j] + sales[i][j];

            if (sales[i][j] > maxProduct) {
                maxProduct = sales[i][j];
                topSalesman = i + 1;
                topProduct = j + 1;
            }
        }
    }

    printf("\nTotal Sales per Salesman:\n");
    for (i = 0; i < 4; i++) {
        printf("Salesman %d: Rs. %.2f", i + 1, totalSalesman[i]);
        
        if (totalSalesman[i] > 1000) {
            float bonus = totalSalesman[i] * 0.10;
            totalSalesman[i] = totalSalesman[i] + bonus;
            printf(" (Bonus applied. New Total: Rs. %.2f)", totalSalesman[i]);
        }
        printf("\n");
    }

    printf("\nTotal Sales per Product:\n");
    for (j = 0; j < 5; j++) {
        printf("Product %d: Rs. %.2f\n", j + 1, totalProduct[j]);
    }

    printf("\nSalesman %d sold the most expensive product (Product %d) worth Rs. %.2f\n", 
           topSalesman, topProduct, maxProduct);

    return 0;
}
