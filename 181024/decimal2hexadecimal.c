#include <stdio.h>

void decimalToHexadecimal(int n) {
    char hex[32];
    int i = 0;

    while (n != 0) {
        int rem = n % 16;
        hex[i++] = (rem < 10) ? (rem + '0') : (rem - 10 + 'A');
        n /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimalToHexadecimal(num);
    return 0;
}
