#include <stdio.h>
#include <time.h>

int randomNumber(int lower, int upper) {
    static int seed = 0; // Custom seed
    seed = (seed * 1103515245 + 12345) % (1 << 31);
    return lower + (seed % (upper - lower + 1));
}

int main() {
    int lower = 1, upper = 100;

    // Set initial seed using time
    srand(time(0));

    printf("Random number between %d and %d: %d\n", lower, upper, randomNumber(lower, upper));
    return 0;
}
