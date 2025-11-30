
//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender { MALE = 1, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (1=MALE, 2=FEMALE, 3=OTHER): ");
    scanf("%d", &p.gender);

    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");
    else
        printf("Invalid gender\n");

    return 0;
}
