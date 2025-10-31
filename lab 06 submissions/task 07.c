#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, exponent;
    int result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a non-negative exponent: ");
    scanf("%d", &exponent);
    int i;

    if (exponent < 0) {
        printf("Error: Exponent cannot be negative.\n");
    } else {
        for ( i = 0; i < exponent; i++) {
            result *= base;
        }

        printf("%d ^ %d = %d\n", base, exponent, result);
   }
return 0;
}
