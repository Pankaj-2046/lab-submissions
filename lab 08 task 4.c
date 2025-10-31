#include <stdio.h>

int main() {
    int temp[3][3][3];
    int avg;
    int sum = 0;
    
    int maxTemp;
    
    int max_i = 0, max_j = 0, max_k = 0;
    int i, j, k;

    printf("Enter the 27 temperature values:\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                scanf("%d", &temp[i][j][k]);
            }
        }
    }

    maxTemp = temp[0][0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                
                sum = sum + temp[i][j][k];
                
                if (temp[i][j][k] > maxTemp) {
                    maxTemp = temp[i][j][k];
                    max_i = i;
                    max_j = j;
                    max_k = k;
                }
            }
        }
    }

    avg = sum / 27;

    printf("The max temperature is : %d \n", maxTemp);
    printf("The coordinates of maximum temperatures are : %d %d %d \n", max_i, max_j, max_k);
    printf("The average temp is %d", avg);

    return 0;
}
