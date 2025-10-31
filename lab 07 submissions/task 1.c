#include <stdio.h>
#include <stdlib.h>

int main( ) {
int product[10] = {700, 800, 1200, 2100, 3000, 3300, 4500, 4900, 5200, 5500};
int i; 
float disc, total = 0;
float final_price;
	
    for( i = 0; i < 10; i++) {
		printf("price for product %d  is : %d \n", i + 1, product[i]);
	}
	printf("------BILLING SYSTEM------ \n");
	for(i = 0; i < 10; i++) {
		if(product[i] > 1 && product[i] < 1000) {
			disc = 0.05;
		} else if (product[i] >= 1000 && product[i] <= 5000) {
			disc = 0.10;
		} else {
			disc = 0.15;
		}
		float disc_price = product[i] * disc;
		final_price = product[i] - disc_price;
		
		printf("the discounted price for %d is : %.2f \n", i + 1, final_price);
		total += final_price;
	}
	printf("Total bill is : %.2f \n", total);
	
	if (total > 25000) {
		printf("You won a golden voucher");
	}  
	return 0;
}
