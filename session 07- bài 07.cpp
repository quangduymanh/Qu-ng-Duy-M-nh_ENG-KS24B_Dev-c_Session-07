#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap a[%d] (so le): ", i);
            scanf("%d", &a[i]);
        } while (a[i] % 2 == 0);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
