#include <stdio.h>
int main() {
    int a[5] = {12, 3, 45, 7, 19};
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            a[i] += 3;
        else 
            a[i] += 2;
    }
    printf("Mang moi sau khi thay doi: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
