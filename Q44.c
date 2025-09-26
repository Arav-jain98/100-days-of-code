// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;    
        int denominator = 2 * i;      
        
        if (i == 1) {
            sum = sum + numerator;  
        } else {
            sum = sum + (float)numerator / denominator;
        }
    }
    
    printf("%.2f\n", sum);
    
    return 0;
}