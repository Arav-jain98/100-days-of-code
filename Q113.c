#include <stdio.h>

int main() {
    int arr[100], n, k, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if(k > 0 && k <= n)
        printf("The %dth smallest element is: %d", k, arr[k - 1]);
    else
        printf("Invalid value of k!");

    return 0;
}