// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char *str) {
    int capitalize = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }
}

int main() {
    char text[1000];
    FILE *outFile;

    printf("Enter your text: ");
   
    fgets(text, sizeof(text), stdin);

    
    text[strcspn(text, "\n")] = 0;

    
    toSentenceCase(text);

   
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(outFile, "%s\n", text);
    fclose(outFile);

    printf("Sentence case text saved in output.txt\n");

    return 0;
}
