//Q69.Find the second largest element in array

#include <stdio.h>

int main() {
    int a[] = {10, 20, 5, 8, 30}, n = 5;
    int max = a[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    if (second == -1)
        printf("No second largest element\n");
    else
        printf("Second largest: %d\n", second);

    return 0;
}