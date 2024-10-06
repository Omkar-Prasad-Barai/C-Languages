#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = gcd(num1, num2);
    lcm = (num1 * num2) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
    return 0;
}
