#include <stdio.h>
#include <string.h>

void print_initials(char name[]) {
    printf("%c", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");
}

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    
    name[strcspn(name, "\n")] = '\0';
    
    print_initials(name);
    
    return 0;
}