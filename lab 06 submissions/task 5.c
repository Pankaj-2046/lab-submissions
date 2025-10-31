#include <stdio.h>
#include <stdlib.h>

int main( ) {
    int number;
    int sum = 0;

    printf("Enter the last 4 digits of your student ID: ");
    scanf(" %d", &number);

    int og_number = number;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    printf("The sum of the digits in %d is %d.\n", og_number, sum);
    
	return 0;
}
