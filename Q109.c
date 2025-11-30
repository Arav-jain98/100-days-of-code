
#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    if(k > n) {
        printf("Subarray size k cannot be greater than array size!\n");
        return 0;
    }
    
    int maxSum = 0;
        for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    int windowSum = maxSum;
        for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);
    
    return 0;
}
