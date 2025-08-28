// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    int prin,rate,time;
    
    printf("Enter the principle amount: ");
    scanf("%d", &prin);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    printf("Simple Interest: %d\n", prin*rate*time/100);
    printf("Compound Interest: %.2f\n", prin * (pow(1 + (float)rate/100, time) - 1));
    
    return 0;
}
