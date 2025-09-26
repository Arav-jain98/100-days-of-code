//Write a program to check if a number is a strong number.

#include <stdio.h>
int main() {
    int num, sum = 0, temp;
    scanf("%d", &num);
    temp = num; 
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    
    if (sum == num) {
        printf("Strong number");
    } else {
        printf("Not a strong number");
    }
    
    return 0;
}