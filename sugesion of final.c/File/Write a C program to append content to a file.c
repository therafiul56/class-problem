#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char content[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // to consume the leftover newline
    fgets(content, sizeof(content), stdin);

    fputs(content, fp);

    fclose(fp);

    printf("Content appended successfully.\n");

    return 0;
}
