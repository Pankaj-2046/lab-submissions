#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int ride_type, fare;
	char distance;
	
	printf("What type of ride would you prefer? (1-3) :  ");
	scanf(" %d", &ride_type);
	
	switch (ride_type) {
		case 1:
		printf("What is the distance (short/long) : ");
		scanf(" %c", &distance);
		 if (distance = 'short') {
		 	printf("Your base fare is 300");
		 	fare = 300;
		 }
		 else if (distance = 'long') {
		 	printf("Your base fare is 500");
		 	fare = 500;
		 } else {
		 	printf("Invalid input");
		 } break;
	case 2:
		printf("What is the distance (short/long) : ");
		scanf(" %c", &distance);
		 if (distance = 'short') {
		 	printf("Your base fare is 300");
		 	fare = 300;
		 }
		 else if (distance = 'long') {
		 	printf("Your base fare is 500");
		 	fare = 500;
		 } else {
		 	printf("Invalid input");
		 } break;
		case 3:
			printf("What is the distance (short/long) : ");
			scanf(" %c", &distance);
		 if (distance = 'short') {
		 	printf("Your base fare is 300");
		 	fare = 300;
		 }
		 else if (distance = 'long') {
		 	printf("Your base fare is 500");
		 	fare = 500;
		 } else {
		 	printf("Invalid input");
		 } break;
		 default:
		 	printf("Invalid input!");
}
	return 0;
}
