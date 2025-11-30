
#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    if(k > n) {
        printf("Window size cannot be greater than array size!\n");
        return 0;
    }
    
    printf("First negative numbers in each subarray: ");
    
    for(int i = 0; i <= n - k; i++) {
        int found = 0; 

        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
                if(found == 0)
            printf("0 ");
    }
    
    printf("\n");
    return 0;
}
