#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    int newSentence = 1;
    
    while (str[i] != '\0') {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } 
        else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
        i++;
    }
    
    printf("%s", str);
    return 0;
}