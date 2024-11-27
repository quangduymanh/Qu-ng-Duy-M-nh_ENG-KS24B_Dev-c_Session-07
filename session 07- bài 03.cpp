#include<stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int foundEven = 0;
    printf("Cac so chan trong mang la: ");
    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            foundEven = 1;
        }
    }
    if (!foundEven) {
        printf("Mang khong chua so chan");
    }
    return 0;
}
