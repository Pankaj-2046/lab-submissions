#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int rev_number = 0;

    printf("Enter the last 4 digits of your student id : ");
    scanf(" %d", &number);
    
    int og_number = number;

    while (number != 0) {
        int digit = number % 10;
        rev_number = rev_number * 10 + digit;
        number /= 10;
    }
    printf("The reverse of %d is %d.\n", og_number, rev_number);

    return 0;
}
