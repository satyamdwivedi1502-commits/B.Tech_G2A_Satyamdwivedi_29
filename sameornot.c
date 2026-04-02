#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch1, ch2;
    int flag = 1

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    if(f1 == NULL || f2 == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    while(1) {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);

        if(ch1 != ch2) {
            flag = 0;
            break;
        }

        if(ch1 == EOF && ch2 == EOF) {
            break;
        }
    }

    if(flag == 1) {
        printf("Files are same\n");
    } else {
        printf("Files are different\n");
    }

    fclose(f1);
    fclose(f2);

    return 0;
}