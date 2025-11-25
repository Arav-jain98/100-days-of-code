#include <stdio.h>

int main() {
    int n;
    int x, totalSum, leftSum, rightSum;
    int pivot = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    totalSum = n * (n + 1) / 2;  
    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;               
        rightSum = totalSum - (x - 1) * x / 2;  

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    if (pivot != -1)
        printf("Pivot integer = %d\n", pivot);
    else
        printf("-1\n");

    return 0;
}