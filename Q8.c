// Write a program to find and display the sum of the first n natural numbers.


#include <stdio.h>
int main() {
    int n,s;
 printf("value of n: ");
 scanf("%d",&n);
 s = (n*(n+1))/2;
 printf("Sum of first n number is %d",s);
 return 0;
}
