#include <stdio.h>
#include <string.h>
void reverse_string(char *s) {
    int len = strlen(s);

    char *l = s + len - 1;
    while (l >= s){
        printf("%c", *l);
        l = l - 1;
    }
    printf("\n");
}

int main() {
	char *s = "SOmething";
    reverse_string(s);
    return 0;
}
