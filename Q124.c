#include <stdio.h>

int main() {
    FILE *source, *dest;
    char srcFile[100], destFile[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(srcFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    fclose(source);
    fclose(dest);

    return 0;
}