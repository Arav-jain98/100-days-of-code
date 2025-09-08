// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter n number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        int odd_number = 2 * i - 1; 
        sum += odd_number;
        
    }
    
    printf("\nSum: %d\n", sum);
    
    return 0;
}