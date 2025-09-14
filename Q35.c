//Q35 Write a program to print all factors of a given number.


#include <stdio.h>
int main() {
    int a, i;
    printf("Enter a number=");
    scanf("%d", &a);
    printf("Factors of %d are: ", a);
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}