#include <stdio.h>
int main() {
    int a[5] = {68, 8, 67, 7, 59};
    int max = a[0], min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}
