#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
	int payment_status[15] = {1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0};
	int delay_months[15] = {0, 1, 0, 2, 0, 0, 3, 0, 0, 1, 5, 0, 2, 0, 0};
	int fine_collected = 0;
	int i;
	
	for(i = 0; i < 15; i++) {
		int fine = 0;
		if (payment_status[i] == 1) {
			printf("student %d is cleared \n", i + 1);
		} else {
			if (delay_months[i] == 1) {
				fine = 500;
			} else if (delay_months >= 2) {
				fine = 1000;
			}
			printf("student %d is a defaulter and his fine is : %d \n", i + 1, fine);
		}
		fine_collected += fine;
	}
	printf("\n total fine collected : %d", fine_collected);
	return 0;
}
