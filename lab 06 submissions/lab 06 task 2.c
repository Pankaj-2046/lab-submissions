#include <stdio.h>
#include <stdlib.h>

int main() {
    int pop_A = 10000;
    const int growth_A = 250;
    int pop_B = 8000;
    const int growth_B = 400;
    int years = 0;

    printf("Town A starts with %d people and grows by %d per year.\n", pop_A, growth_A);
    printf("Town B starts with %d people and grows by %d per year.\n\n", pop_B, growth_B);

   while (pop_B <= pop_A) {
        pop_A += growth_A;
        pop_B += growth_B;
        
        years++;
    }
    printf("It will take %d years for Town B's population to surpass Town A's.\n", years);
    printf("In that year, the final populations will be:\n");
    printf("  Town A: %d\n", pop_A);
    printf("  Town B: %d\n", pop_B);

    return 0;
}
