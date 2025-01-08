#include <stdio.h>

int main() {
    int m, n;

    // Input rows and columns of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d%d", &m, &n);

    // Declare matrices with sizes based on user input
    int a[m][n], b[m][n], c[m][n];

    // Input elements of matrix A
    printf("\nEnter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("\nEnter the elements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Display elements of matrix A
    printf("\nElements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display elements of matrix B
    printf("\nElements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Compute and display the addition of matrices
    printf("\nAddition of matrices A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
