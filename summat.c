#include <stdio.h>

void sum(int *p, int *q, int *r, int n, int m) {
    int cnt = 0;

    while (cnt < (n * m)) {
        *r = *p + *q;
        ++p;
        ++q;
        ++r;
        ++cnt;
    }
}

int main() {
    int a[50][50], b[50][50], c[50][50], n, m, i, j;
    printf("Enter the order of the matrix: \n");
    scanf("%d%d", &n, &m);

    printf("Enter elements of matrix a: \n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix b: \n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
     for (i = 0; i < n; ++i) 
        for (j = 0; j < m; ++j){
            sum(&a[i][j], &b[i][j], &c[i][j], n, m);
     }
    printf("Sum of matrices a and b: \n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}