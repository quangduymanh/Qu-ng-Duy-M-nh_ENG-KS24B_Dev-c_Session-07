#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m * n; i++) {
        scanf("%d", &a[i / n][i % n]);
    }
    for (int i = 0; i < m * n; i++) {
        printf("%d ", a[i / n][i % n]);
        if (i % n == n - 1) printf("\n");  
    }
    return 0;
}
