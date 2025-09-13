#include <stdio.h>

int main() {
    int num, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num <= 1) {
        isPrime = 0;
    } else if(num == 2) {
        isPrime = 1;
    } else if(num % 2 == 0) {
        isPrime = 0;
    } else {
        for(int i = 3; i * i <= num; i += 2) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    
    return 0;
}