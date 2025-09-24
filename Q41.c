//Q41.Write a program to swap the first and last digit of a number.


#include <stdio.h>
int main() {
    int num, temp, first, last, digits = 0;
    int power = 1, middle;
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    while (temp > 0) {
        first = temp % 10;
        digits++;
        temp = temp / 10;
    }
    if (digits == 1) {
        printf("%d\n", num);
        return 0;
    }
    for (int i = 1; i < digits; i++) {
        power = power * 10;
    }
    middle = (num % power) / 10;
    int result = last * power + middle * 10 + first;
    printf("%d\n", result);
    return 0;
}