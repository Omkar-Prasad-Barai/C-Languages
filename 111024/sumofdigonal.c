#include <stdio.h>
int main() {
    int n, sumPrimary = 0, sumSecondary = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        sumPrimary += matrix[i][i];
        sumSecondary += matrix[i][n - i - 1];
    }

    printf("Sum of primary diagonal: %d\n", sumPrimary);
    printf("Sum of secondary diagonal: %d\n", sumSecondary);
    return 0;
}
