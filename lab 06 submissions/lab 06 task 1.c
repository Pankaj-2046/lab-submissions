#include <stdio.h>

int main() {
    float initial = 1000.0;
    float rate = 0.05;
    float amount = initial;
    int years = 10;
    int year;
    
    printf("Calculating compound interest for an initial investment of $%.2f at %.0f%% annually for %d years.\n", initial, rate * 100, years);

    for ( year = 1; year <= years; year++) {
        amount *= (1 + rate);
        printf("Total amount at the end of year %2d: $%.2f\n", year, amount);
    }

    return 0;
}
