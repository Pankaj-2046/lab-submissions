#include <stdio.h>
#include <stdlib.h>

int main( ) {
	int house[10] = {150, 189, 220, 268, 310, 500, 550, 689, 720, 800};
	int i, fine, high_count = 0;
	int bill_house, total;
	
	for( i = 0; i < 10; i++) {
		if (house[i] > 0 && house[i] <= 200 ) {
			fine = 15;
			bill_house = house[i] * fine;
			total += bill_house;
			printf("House %d bill is : %d \n", i + 1, bill_house);
		} else if (house[i] > 200 && house[i] <= 500){
			fine = 20;
			bill_house = house[i] * fine;
			total += bill_house;
			printf("House %d bill is : %d \n", i + 1, bill_house);
		} else if (house[i] > 500 && house[i] < 700) {
			fine = 25;
			bill_house = house[i] * fine;
			total += bill_house;
			printf("House %d bill is : %d \n", i + 1, bill_house);
		} else {
			fine = 25;
			high_count++;
			bill_house = house[i] * fine;
			total += bill_house;
			printf("House %d bill is : %d and your house has been flagged \n", i + 1, bill_house);
		}
	}
	printf("Total revenue is %d \n", total);
	printf("The number of houses flagged are %d", high_count);
	return 0;
}
