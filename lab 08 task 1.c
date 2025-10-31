#include <stdio.h>

int main() {
    
    int seats[10][4] = {0}; 
    int row, col;
    int fullRows = 0;
    int i, j, n;
    
    printf("How many seats would you like to book? : ");
    scanf(" %d", &n);

    for (i = 0; i < n; i++) { 
        printf("Enter row (1-10): ");
        scanf("%d", &row);
        printf("Enter seat (1-4): ");
        scanf("%d", &col);

        seats[row - 1][col - 1] = 1; 
    }

    printf("\nSeat map:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 10; i++) {
        int booked_count = 0;
        
        for (j = 0; j < 4; j++) {
            booked_count = booked_count + seats[i][j];
        }
        
        if (booked_count == 4) {
            fullRows++;
        }
    }
    
    printf("\nFull rows booked: %d\n", fullRows);
    return 0;
}
