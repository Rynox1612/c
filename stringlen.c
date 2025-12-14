#include <stdio.h>

int countCharacters(const char *text) {
    int i;
    for (i = 0; text[i] != '\0'; i++);
    return i-1;
}

int countWords(char *text) {
    int count = 0;
    int inWord = 0;
    char *ptr = text;
    
    while (*ptr != '\0') {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n') {
            inWord = 0;
        }
        else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        ptr++;
    }
    
    return count;
}

int main() {
    int n;
    printf("Enter the maximum characters you want in your string: ");
    scanf("%d", &n);
    char text[n];
    char *textPtr = text;
    
    printf("Enter text (press Enter when done): ");

    if (fgets(text, n, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    

    printf("Text you entered: \n%s\n", text);
    
    int charCount = countCharacters(textPtr);
    int wordCount = countWords(textPtr);
    
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    
    return 0;
}