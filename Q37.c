//Q37.Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, original_a, original_b, rem, gcd, lcm;
    scanf("%d %d", &a, &b);
    
    original_a = a;
    original_b = b;

    while (b != 0) {
        rem = b;
        b = a % b;
        a = rem;
    }
    gcd = a;
    lcm = (original_a * original_b) / gcd;

    printf("%d\n", lcm);
    return 0;
}