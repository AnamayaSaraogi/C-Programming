#include <stdio.h>

int main() {
    int m, n, p, q;

    // Input dimensions for matrices
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d%d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication is not possible. Columns of A must match rows of B.\n");
        return 0;
    }

    // Declare matrices based on input dimensions
    int a[m][n], b[p][q], c[m][q];

    // Initialize the result matrix to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Input elements for matrix A
    printf("\nEnter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for matrix B
    printf("\nEnter the elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display matrix A
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Display result matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
