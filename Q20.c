// Write a program to display the day of the week based on a number (1–7) using switch-case.



#include <stdio.h>

int main() {
    int a;
    printf("Enter a number between (1-7):");
    scanf("%d",&a);
    if (a==1){
        printf("Monday");
    }
    else if (a==2){
        printf("Tuesday");
    }
    else if (a==3){
        printf("Wednesday");
        
    }
    else if (a==4){
        printf("Thursday");
        
    }
    else if (a==5){
        printf("Friday");
        
    }
    else if (a==6){
        printf("Saturday");
    }
    else if (a==7){
        printf("Sunday");
    }
    else {
        printf("Invalid number");
    }
    return 0;
}