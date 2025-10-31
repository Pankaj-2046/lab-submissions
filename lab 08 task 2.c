#include <stdio.h>

int main() {
    int sudoku[3][3];
    int valid = 1;
    int i, j;

    printf("Enter the 3x3 grid (use 0 for empty cells):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &sudoku[i][j]);
            if (sudoku[i][j] != 0 && (sudoku[i][j] < 1 || sudoku[i][j] > 9)) {
                valid = 0;
            }
        }
    }

    if (valid == 1) {
        int freq[10] = {0};

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                
                int number = sudoku[i][j];

                if (number != 0) { 
                    
                    freq[number]++;
                    
                    if (freq[number] > 1) {
                        valid = 0;
                    }
                }
            }
        }
    }

    if (valid) {
        printf("\nValid Grid\n");
    } else {
        printf("\nInvalid Grid\n");
    }

    return 0;
}
