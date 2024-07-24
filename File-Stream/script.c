#include <stdio.h>

int main() {
    FILE *out_file = fopen("out_file.txt", "w");
    char sentence[80];

    fgets(sentence, sizeof(sentence),stdin);
    printf("%s", sentence);
    fprintf(out_file, "Don't you dare say: %s", sentence);
    fclose(out_file);
    return 0;

}