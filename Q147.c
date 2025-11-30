//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3], temp;
    FILE *fp;

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }

    printf("Enter details of 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);

        fwrite(&e[i], sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    printf("\n--- Employee Details (from file) ---\n");
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("Salary: %.2f\n", temp.salary);
    }

    fclose(fp);
    return 0;
}