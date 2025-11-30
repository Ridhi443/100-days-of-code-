// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

void printSubstrings(char *str) {
    int n = strlen(str);

   
    for (int len = 1; len <= n; len++) {
       
        for (int i = 0; i <= n - len; i++) {
           
            printf("%.*s\n", len, str + i);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

    printf("All substrings are:\n");
    printSubstrings(str);

    return 0;
}