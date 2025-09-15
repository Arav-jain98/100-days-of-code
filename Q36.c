//36.Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a,b,rem;
    scanf("%d %d",&a , &b);
    while(b !=0){
        rem = b;
        b = a%b;
        a = rem;
    }
    printf("%d",a);
    return 0;
}