
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in file.\n");
        return 0;
    }

    double average = (double) sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
