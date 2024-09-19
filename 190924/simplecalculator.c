#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: printf("Invalid operator!\n"); return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
