// Q22 (Conditional Statements)
// Write a program to find profit or loss percentage given cost price and selling price.



#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float difference, percentage;
    
    printf("Enter cost and selling price:");
    scanf("%f %f", &costPrice, &sellingPrice);
    
    difference = sellingPrice - costPrice;
    
    if(difference > 0) {
        
        percentage = (difference / costPrice) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if(difference < 0) {
       
        percentage = (-difference / costPrice) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else {
        
        printf("No Profit No Loss\n");
    }
    
    return 0;
}