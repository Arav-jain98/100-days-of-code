//Q38.Write a program to find the sum of digits of a number.


#include <stdio.h>
int main(){
    int num,sum =0 , temp;
    scanf("%d",&num);
    while(num != 0){
        temp = num%10;
        sum += temp;
        num /=10;
    }
    printf("%d",sum);
    return 0;
}