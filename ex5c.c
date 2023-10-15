#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char search, replace;
    int length;

    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);

    printf("Length of the string: %d\n", length);

    printf("Enter a character to search: ");
    scanf(" %c", &search);

    printf("Enter a character to replace with: ");
    scanf(" %c", &replace);

    for(int i = 0; i < length; i++) {
        if(str[i] == search) {
            str[i] = replace;
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
