#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    while (num != 0) {
        digits++;
        num /= 10;
    }
    num = original;
    while (num != 0) {
        int rem = num % 10;
        sum += pow(rem, digits);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int lower, upper;
    printf("Enter the lower and upper range: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
