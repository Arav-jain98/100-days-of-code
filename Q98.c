#include <stdio.h>
#include <string.h>

void print_initials_and_surname(char name[]) {
    int i = 0;
    int length = strlen(name);
 
    printf("%c", name[0]);
    for (i = 1; i < length; i++) {
        if (name[i] == ' ' && name[i+1] != ' ') {
            printf("%c", name[i + 1]);
        }
    }
    
    char *surname = strrchr(name, ' ') + 1;
    printf(" %s\n", surname); 
}

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin); 
  
    name[strcspn(name, "\n")] = '\0';
    
    print_initials_and_surname(name);
    
    return 0;
}