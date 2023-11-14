#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int main() {
    char filename[100];
    FILE *file;
    char word[MAX_WORD_LENGTH];
    char longestWord[MAX_WORD_LENGTH];
    int wordCount = 0;
    int maxWordLength = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    while (fscanf(file, "%s", word) != EOF) {
        int currentWordLength = strlen(word);
        if (currentWordLength > maxWordLength) {
            maxWordLength = currentWordLength;
            strcpy(longestWord, word);
        }
        wordCount++;
    }

    if (wordCount > 0) {
        printf("Word count: %d\n", wordCount);
        printf("Longest word: %s\n", longestWord);
    } else {
        printf("No words found in the file.\n");
    }
    
    fclose(file);

    return 0;
}
