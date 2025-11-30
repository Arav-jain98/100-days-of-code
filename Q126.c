
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or could not be opened!\n");
        return 1;
    }

    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    printf("\n\nFile read successfully.\n");

    return 0;
}
