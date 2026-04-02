#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[20], temp[20];
    int count = 0;

    fp = fopen("file.txt", "r");

    if(fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(word, temp) == 0) {
            count++;
        }
    }

    if(count > 0)
        printf("Word found %d times\n", count);
    else
        printf("Word not found\n");

    fclose(fp);
    return 0;
}