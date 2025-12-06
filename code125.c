// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char text[1000];
    FILE *fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}