// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char surname[50];
    int i, len, last_start = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

   
    printf("%c.", name[0]);

    
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
           
            printf("%c.", name[i + 1]);
            last_start = i + 1; 
        }
    }

   
    printf(" %s\n", &name[last_start]);

    return 0;
}