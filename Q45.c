// Program to find sum of series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    
    scanf("%d", &n); 
    
    for (i = 1; i <= n; i++) {
        float numerator = 2 * i;         
        float denominator = 4 * i - 1;
        sum = sum + numerator / denominator;
    }
    
    printf("Approximate sum: %.2f\n", sum);
    
    return 0;
}