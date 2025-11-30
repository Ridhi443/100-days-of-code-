// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 26  
int main() {
    char s[1000], t[1000];
    
    
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    
    
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    
    int count_s[CHAR_RANGE] = {0};
    int count_t[CHAR_RANGE] = {0};
    
    
    for (int i = 0; s[i] != '\0'; i++) {
        count_s[s[i] - 'a']++;
        count_t[t[i] - 'a']++;
    }
    
    
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count_s[i] != count_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    
    printf("Anagram\n");
    return 0;
}
