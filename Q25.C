//Write a program to print numbers from 1 to n. In c language

#include <stdio.h>

int main() {
    int n, i;

    // Ask user to enter the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}