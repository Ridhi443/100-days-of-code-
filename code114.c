// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256 

int main() {
    char s[1000];
    
    
    printf("Enter the string: ");
    scanf("%s", s);
    
    int n = strlen(s);
    int last_index[CHAR_RANGE]; 
    for (int i = 0; i < CHAR_RANGE; i++) {
        last_index[i] = -1;
    }
    
    int max_len = 0;
    int start = 0; 
    
    for (int end = 0; end < n; end++) {
        char current = s[end];
        
        if (last_index[(int)current] >= start) {
            start = last_index[(int)current] + 1;
        }
        
       
        last_index[(int)current] = end;
        
        
        if (end - start + 1 > max_len) {
            max_len = end - start + 1;
        }
    }
    
    printf("Length of the longest substring without repeating characters: %d\n", max_len);
    
    return 0;
}
