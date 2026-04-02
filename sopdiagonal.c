#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j;
    int sum = 0;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}