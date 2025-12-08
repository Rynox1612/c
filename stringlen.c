#include <stdio.h>

int countLength(char str[]) {
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }

    return end - start;   // pointer subtraction
}

int main(){
    char str[50];
    scanf("%s",&str);
    printf("%d",countLength(str));

    return 0;
}
