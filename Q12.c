// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main()
{int num;
printf("enter a number: ");
scanf("%d", &num);
if (num <= 0) {
     if (num == 0) {
 printf("You entered zero.\n");
        } else {
            printf("You entered a negative number.\n");
        }
        } else {  printf("You entered a positive number.\n");
    }

    return 0;
}

