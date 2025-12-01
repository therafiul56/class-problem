#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *temp;
    char filename[100], word[50], buffer[1000];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter word to remove: ");
    scanf("%s", word);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error: Cannot create temporary file.\n");
        fclose(fp);
        return 1;
    }

    while (fscanf(fp, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) != 0) {
            fprintf(temp, "%s ", buffer);
        }
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Word removed successfully.\n");

    return 0;
}
