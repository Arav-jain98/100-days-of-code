
//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    int r;

    printf("Select role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    scanf("%d", &r);

    if (r == ADMIN)
        printf("Welcome, Admin! You have full access.\n");
    else if (r == USER)
        printf("Hello User! You have limited access.\n");
    else if (r == GUEST)
        printf("Welcome Guest! You have read-only access.\n");
    else
        printf("Invalid role selected.\n");

    return 0;
}
