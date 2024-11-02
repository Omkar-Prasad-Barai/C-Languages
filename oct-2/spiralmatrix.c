#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], val = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (val <= n * n) {
        for (int i = left; i <= right; i++)
            matrix[top][i] = val++;
        top++;

        for (int i = top; i <= bottom; i++)
            matrix[i][right] = val++;
        right--;

        for (int i = right; i >= left; i--)
            matrix[bottom][i] = val++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            matrix[i][left] = val++;
        left++;
    }

    printf("Spiral matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
