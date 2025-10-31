#include <stdio.h>

int main ( ) {
	int cars[8] = {9, 19, 15, 10, 16, 8, 11, 20};
	int i, count = 0;
	
	for ( i = 0 ; i < 8; i++) {
		if(cars[i] > 1 && cars[i] < 12) {
			printf("Car %d needs mentainance. \n", i + 1);
			count++;
		} else if (cars[i] > 12 && cars[i] < 18) {
			printf("Car %d is average. \n", i + 1);
		} else {
			printf("Car %d is efficient. \n", i + 1);
		}
	}
	if (count > 3) {
		printf("The fleet efficiency alert!");
	}
	return 0;
}
