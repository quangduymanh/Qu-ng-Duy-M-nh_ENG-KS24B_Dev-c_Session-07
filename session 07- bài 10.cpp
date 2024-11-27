#include <stdio.h>
int f(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) 
        if (f(a[i])) 
            printf("%d ", a[i]);
    return 0;
}
