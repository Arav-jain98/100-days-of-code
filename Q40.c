//Q40.Write a program to find the 1's complement of a binary number and print it.
#include <stdio.h>
int main() {
    int binary, temp, digit;
    int comp = 0, mult = 1, digits = 0;
    scanf("%d", &binary);
    
    temp = binary;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }
    
    temp = binary;
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0) {
            comp = comp + (1 * mult);
        } else {
            comp = comp + (0 * mult);
        }
        mult = mult * 10;  
        temp = temp / 10;
    }
    printf("%0*d\n", digits, comp);
    
    return 0;
}