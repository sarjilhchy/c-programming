#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10], B[10][10], sum[10][10];

    printf("Enter the size of square matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

   
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("Sum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
