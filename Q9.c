// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,ci;
int n;
printf("enter principal amount");
scanf("%f",&p);
printf("enter intrest rate");
scanf("%f",&r);
printf("enter time period in years");
scanf("%f",&t);
si=(p*r*t)/100;
printf("simple intrest: %2f\n",si);

printf("number of time intrest is compound in a year: ");
scanf("%d",&n);
ci= p*pow((1+r/(n*100)),(n*t))-p;
printf("compound intrest: %2f\n",ci);
return 0;
}
