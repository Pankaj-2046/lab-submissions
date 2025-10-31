#include <stdio.h>

int main() {
    int data[3][3], key[3][3], encrypted[3][3];
    int i, j;
    
    int max = 0; 
    int max_row = 0, max_col = 0; 

    printf("Enter elements of Data Matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    printf("\nEnter elements of Key Matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &key[i][j]);
        }
    }
    
    printf("\nEncrypted Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
            
            printf("%d\t", encrypted[i][j]);
            
            if (i == 0 && j == 0) {
                max = encrypted[i][j];
            } else if (encrypted[i][j] > max) {
                max = encrypted[i][j];
                max_row = i;
                max_col = j;
            }
        }
        printf("\n");
    }

    printf("\nMaximum encrypted value: %d found at cell [%d][%d]\n", 
           max, max_row, max_col);

    return 0;
}
