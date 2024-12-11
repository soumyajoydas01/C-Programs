//Matrix Multiplication
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int m, n, p, q, i, j, k;
    float a[10][10], b[10][10], c[10][10];

    printf("Enter the order of the first matrix (rows and columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of the second matrix (rows and columns): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Input first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("b[%d][%d] = ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    // Initialize the resultant matrix to zero
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("The resultant matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
