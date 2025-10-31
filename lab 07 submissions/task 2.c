#include <stdio.h>
#include <stdlib.h>

int main( ) {
	int ward[7] = {3, 5, 6, 8, 10, 12, 13};
	int i, total = 0;
	
	for (i = 0; i < 7; i++) {
		if ( ward[i] < 6) {
			printf("ward %d is under-utilized \n", i + 1);
			printf("ward %d needs administrative review(under-utilized) \n", i + 1);
		} else if (ward[i] >= 6 && ward[i] <= 10 ) {
			printf("ward %d is stable \n", i + 1);
			printf("ward %d does not need administrative review \n", i + 1);
		} else {
			printf("ward %d is over-utilized \n", i + 1);
			printf("ward %d needs administrative review(over-utilized) \n", i + 1);
		}
		total += ward[i];
	}
	

	printf("total number of patient are : %d", total);
	return 0;
}
