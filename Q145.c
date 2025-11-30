
//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student students[5];
    struct Student topper;

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    topper = findTopper(students, 5);

    printf("\n--- Topper Details ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
