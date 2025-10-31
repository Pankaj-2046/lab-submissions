#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int age, balance;
	
	printf("Enter your age : ");
	scanf(" %d", &age);
	printf("Enter your account balance : ");
	scanf(" %d", &balance);
	
	if (age < 21) {
		printf("Not elligible for ride (underage)");
	} 
	else if ( balance < 200 ) {
		printf("Not elligble (insufficient funds)");
	}
	else {
		printf("Elligible for ride.");
	}
	return 0;
}
