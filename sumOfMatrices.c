#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a[10][10], b[10][10], c[10][10];
    int n;
    printf("Enter the order of the two matrices: ");
    scanf("%d", &n);

    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of a[%d][%d]: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of b[%d][%d]: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
       for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
       }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < n; i++) {
       for (j = 0; j < n; j++) {
            printf("%f ", c[i][j]);
       }
       printf("\n");
    }

    return 0;
}
