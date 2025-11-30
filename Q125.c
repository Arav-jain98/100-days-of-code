#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}